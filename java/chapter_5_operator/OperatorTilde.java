// public class OperatorTilde {
//     public static void main(String[] args) {
//         OperatorTilde sample = new OperatorTilde();
//         byte b = 127;
//         sample.printTildeResult(b);
//         b = 1;
//         sample.printTildeResult(b);
//     }
//     public void printTildeResult(byte b) {
//         System.out.println("Original value = " + b);
//         System.out.println("Tilde value    = " + ~b);
//     }
// }

public class OperatorTilde {
    public static void main(String[] args) {
        OperatorTilde sample = new OperatorTilde();
        sample.printTildeResult();
    }

    public void printTildeResult()
    {
        int a = 3, b = 2;
        System.out.println ((a==3) && (b==1));
        System.out.println ((a==3) & (b==1));
    }


}