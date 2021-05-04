// public class ProfilePrint {
//     byte age;
//     String name;
//     boolean isMarried;
//     public static void main(String[] args) {
//         ProfilePrint profile = new ProfilePrint();
//         profile.setAge((byte)20);
//         profile.setName("minho");
//         profile.setMarried(true);
//         System.out.println(profile.getAge());
//         System.out.println(profile.getName());
//         System.out.println(profile.isMarried());
//     }
//     public void setAge(byte paramAge) {
//         age = paramAge;
//     }
//     public byte getAge() {
//         return (age);
//     }
//     public void setName(String paramName) {
//         name = paramName;
//     }
//     public String getName() {
//         return(name);
//     }
//     public void setMarried(boolean flag) {
//         isMarried = flag;
//     }
//     public boolean isMarried() {
//         return (isMarried);
//     }
// }

public class ProfilePrint {
    boolean isMarried;
    byte age;
    String name;

    public static void main(String[] args) {
        ProfilePrint sample = new ProfilePrint();
        sample.setAge((byte)29);
        sample.setName("Mino");
        sample.setMarried(true);
        System.out.println("My name is " + sample.name);
        System.out.println("My Age is " + sample.age);
        if (sample.isMarried) {
            System.out.println("I'm married");
        }
        else {
            System.out.println("I'm not Married");
        }
    }

    public void setAge(byte age) {
        this.age = age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setMarried(boolean flag) {
        this.isMarried = flag;
    }
}