package c.exception;

public class FinallySample {
    public static void main(String args[])
    {
        FinallySample finallySample = new FinallySample();
        finallySample.finallySample();
    }

    public void finallySample() {
        int[] intArray = new int[5];
        try {
            System.out.print(intArray[5]);
        } catch (Exception e)
        {
            System.out.println(intArray.length);
        } finally {
            System.out.println("here is finally");

        }
        System.out.println("this code must run.");
    }
}
