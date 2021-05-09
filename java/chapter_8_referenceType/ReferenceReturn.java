public class ReferenceReturn {
    public static void main(String[] args) {
        ReferenceReturn reference = new ReferenceReturn();

    }

    public int intReturn() {
        int returnInt = 0;
        return returnInt;
    }

    public int[] intArrayReturn() {
        int returnArray[] = new int[10];
        return returnArray;
    }

    public String stringReturn() {
        String returnString = "Return value";
        return returnString;
    }
}