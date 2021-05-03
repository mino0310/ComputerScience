// public class Calculator {
//     public static void main(String[] args) {
//         System.out.println("Calculator class started!");
//         Calculator calc = new Calculator();
//         int a = 10;
//         int b = 5;
//         System.out.println("add = " + calc.add(a, b));
//         System.out.println("sub = " + calc.sub(a, b));
//         System.out.println("mul = " + calc.multiply(a, b));
//         System.out.println("div = " + calc.divide(a, b));
//     }
//     public int add(int a, int b){
//         return a + b;
//     }
//     public int sub(int a, int b) {
//         return a - b;
//     }
//     public int multiply(int a, int b) {
//         return a * b;
//     }
//     public int divide(int a, int b) {
//         return a / b;
//     }
// }

public class Calculator {
    public static void main(String[] args) {
        System.out.println("Calculator class started");
        Calculator calc = new Calculator();
        int a = 10, b = 5;
        System.out.println("add = " + calc.add(a,b ));
        System.out.println("sub = " + calc.sub(a,b ));
        System.out.println("mul = " + calc.mul(a,b ));
        System.out.println("div = " + calc.div(a,b ));
    }
    public int add(int a, int b) {
        return (a + b);
    }
    public int sub(int a, int b) {
        return (a - b);
    }
    public int mul(int a, int b) {
        return (a * b);
    }
    public int div(int a, int b) {
        return (a / b);
    }
}