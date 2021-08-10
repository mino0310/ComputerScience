package c.exception;

public class MultiCatchSample {
    public static void main(String args[])
    {
        MultiCatchSample multiCatchSample = new MultiCatchSample();
        multiCatchSample.multiCatchThree();
    }

    public void multiCatch(){
        int[] intArray = new int[5];
        try{
            System.out.println(intArray[5]);
        } catch (ArrayIndexOutOfBoundsException e){
            System.out.println("ArrayIndexOutOfBoundsException occurred");
        } catch (Exception e){
            System.out.println(intArray.length);
        }
    }
    // public void multiCatchOrderChange(){
    //     int[] intArray = new int[5];
    //     try{
    //         System.out.println(intArray[5]);
    //     } catch (Exception e){
    //         System.out.println(intArray.length);
    //     } catch (ArrayIndexOutOfBoundsException e){
    //         System.out.println("ArrayIndexOutOfBoundsException occurred");
    //     }
    // }

    public void multiCatchThree() {
        int[] intArray = new int[5];
        try {
            System.out.println(intArray[5]);
        } catch (NullPointerException e) {
            System.out.println("NullPointerException occurred");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException occurred");
        } catch (Exception e) {
            System.out.println(intArray.length);
        }
    }
}
