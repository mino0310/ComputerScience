// public class Profile {
//     String name;
//     int age;
//     public static void main(String[] args){
//         Profile profile = new Profile();
//         profile.setName("Min");
//         profile.setAge(20);
//         // profile.name = "Ho";
//         // profile.age = 25;
//         profile.printName();
//         profile.printAge();
//     }
//     public void setName(String str) {
//         name = str;
//     }
//     public void setAge(int val) {
//         age = val;
//     }
//     public void printName() {
//         System.out.println("My name is " + name);
//     }
//     public void printAge() {
//         System.out.println("My age is " + age);
//     }
// }

public class Profile {
    String name;
    int age;
    public static void main(String[] args) {
        Profile sample = new Profile();
        sample.setName("mino");
        sample.setAge(29);
        sample.printName();
        sample.printAge();
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void printName() {
        System.out.println(name);
    }
    public void printAge() {
        System.out.println(age);
    }
}