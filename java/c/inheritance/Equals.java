package c.inheritance;

public class Equals {
    public static void main(String args[]) {
        Equals thisObject = new Equals();
        thisObject.equalMethod();
    }
    public void equalMethod() {
        MemberDTO obj1 = new MemberDTO("mino");
        MemberDTO obj2 = new MemberDTO("mino");
        if (obj1 == obj2) System.out.println("same");
        else System.out.println("different");
    }
}