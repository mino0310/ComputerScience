public class ArrayLength {
    public static void main(String[] args) {
        ArrayLength sample = new ArrayLength();
        sample.printArray();
    }

    // public void printArray() {
    //     int [][]twoDim = {{1, 2, 3}, {4, 5, 6}};
    //     int twoDimLength = twoDim.length;
    //     for (int oneLoop = 0; oneLoop < twoDimLength; oneLoop++) {
    //         int twoDimOneLength = twoDim[oneLoop].length;
    //         for (int twoLoop = 0; twoLoop < twoDimOneLength; twoLoop++) {
    //             System.out.println("twoDim["+oneLoop+"]"+"["+twoLoop+"]" + "= " +twoDim[oneLoop][twoLoop]);
    //         }
    //     }
    // }
    public void printArray() {
        int [][]twoDim = {{1, 2, 3}, {4, 5, 6}};
        for (int[] array : twoDim){
            for (int data : array) {
                System.out.println(data);
            }
        }
    }
}