public class ReferenceStatic {
    String name = "mino";
    public static void main(String[] args) {
        ReferenceStatic.staticMethod();
    }
    public static void staticMethod() {
        System.out.println(name);
    }
}