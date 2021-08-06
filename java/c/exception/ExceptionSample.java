package c.exception;

public class ExceptionSample {
    public static void main(String args[])
    {
        ExceptionSample exceptionSample = new ExceptionSample();
        exceptionSample.arrayOutOfBoundsTryCatch();
    }

    public void arrayOutOfBounds(){
        int[] intArray = new int[5];
        System.out.println(intArray[5]);
    }

    public void arrayOutOfBoundsTryCatch(){
        int[] intArray = new int[5];
        try {
            System.out.println(intArray[5]);
            System.out.println("this code should run.");
        } catch (Exception e) {
            System.err.println("Exception occured");
        }
        System.out.println("this code must run");
    }
}
