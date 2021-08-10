package c.exception;

public class ThrowSample {
    public static void main(String args[]){
        ThrowSample throwSample = new ThrowSample();
        throwSample.throwExcetpion(13);
    }

    public void throwExcetpion(int number) throws Exception
    {
        if (number > 12){
            throw new Exception("Number is over than 12");
        }
        System.out.println("Number is " + number);
    }
}
