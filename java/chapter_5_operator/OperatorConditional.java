public class OperatorConditional {
    public static void main(String[] args)
    {
        OperatorConditional sample = new OperatorConditional();
        sample.condition();
    }
    public void condition() {
        boolean x = true;
        boolean y = true;
        System.out.println(x && y);
        System.out.println(x || y);
        System.out.println("-----");
        x = false;
        System.out.println(x && y);
        System.out.println(x || y);
        System.out.println("-----");
        y = false;
        System.out.println(x && y);
        System.out.println(x || y);
    }
}
