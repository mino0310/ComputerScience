public class BitOperators {
    public static void main(String[] args) {
        BitOperators sample = new BitOperators();
        sample.simpleBitOperators();
    }
    public void printValue(String variableName, int a) {
        System.out.print(variableName + "=");
        int aZeroCount = Integer.numberOfLeadingZeros(a);
        for (int loop = 0; loop < aZeroCount; loop++) {
            System.out.print("0");
        }
        if (Integer.SIZE == aZeroCount) {
            System.out.println("\t["+a+"]");
        } else {
            System.out.println(Integer.toBinaryString(a)+"\t[" + a + "]");
        }
    }
    public void andOrXorSample() {
        int a = 1, b = 7;
        andOperation(a, b);
        orOperation(a, b);
        xorOperation(a, b);
        // a = 1;
        // b = 3;
        // andOperation(a, b);
        // orOperation(a, b);
        // xorOperation(a, b);
        // a = -10;
        // b = 10;
        // andOperation(a, b);
        // orOperation(a, b);
        // xorOperation(a, b);
    }
    public void andOperation(int a, int b) {
        int result = a & b;
        printValue("  a", a);
        printValue("  b", b);
        printValue("a&b", result);
        System.out.println();
    }
    public void orOperation(int a, int b) {
        int result = a | b;
        printValue("  a", a);
        printValue("  b", b);
        printValue("a|b", a|b);
        System.out.println();
    }
    public void xorOperation(int a, int b) {
        int result = a ^ b;
        printValue("  a", a);
        printValue("  b", b);
        printValue("a^b", a|b);
        System.out.println();
    }
    public void notSample() {
        int a = 1;
        notOperation(a);
        a = 255;
        notOperation(a);
        a = -10;
        notOperation(a);
        a = 0;
        notOperation(a);
    }
    public void notOperation(int a) {
        int result = ~a;
        printValue("  a", a);
        printValue(" ~a", result);
        System.out.println();
    }
    public void shiftSample() {
        int a = 1;
        for (int loop = 1; loop < 34; loop++) {
            a = shiftLeft(a, 1);
        }
    }
    public int shiftLeft(int a, int move) {
        int result = a<<move;
        printValue("   a", a);
        printValue("a<<" + move, result);
        System.out.println();
        return result;
    }
    public void shiftRightSample() {
        int a = 2147483647;
        for (int loop = 1; loop < 34; loop++) {
            a = shiftRight(a, 1);
        }
    }
    public int shiftRight(int a, int move) {
        int result = a>>move;
        printValue("   a", a);
        printValue("a>>" + move, result);
        System.out.println();
        return result;
    }
    public void shiftUnsignedRightSample() {
        int a = -2147483648;
        for (int loop = 1; loop < 34; loop++) {
            a = shiftUnsignedRight(a, 1);
        }
    } 
    public int shiftUnsignedRight(int a, int move) {
        int result = a>>>move;
        printValue("   a", a);
        printValue("a>>>" + move, result);
        System.out.println();
        return result;
    }
    public void simpleBitOperators() {
        int a = 1; 
        int b = 7;
        printValue("   a", a);
        printValue("   b", b);
        b &= a;
        printValue("b&=a", b);
        b = 7;
        b |= a;
        printValue("b|=a", b);    
        b ^= a;
        printValue("b^=a", b);
        b = 7;
        b <<= a;
        printValue("b<<=a", b);
        b = 7;
        b >>= a;
        printValue("b>>=a", b);
        b = 7;
        b >>>= a;
        printValue("b>>>=a", b);
    }
}