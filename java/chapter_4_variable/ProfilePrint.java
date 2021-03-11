public class ProfilePrint {
    byte age;
    String name;
    boolean isMarried;
    public static void main(String[] args) {
        ProfilePrint profile = new ProfilePrint();
        profile.setAge((byte)20);
        profile.setName("minho");
        profile.setMarried(true);
        System.out.println(profile.getAge());
        System.out.println(profile.getName());
        System.out.println(profile.isMarried());
    }
    public void setAge(byte paramAge) {
        age = paramAge;
    }
    public byte getAge() {
        return (age);
    }
    public void setName(String paramName) {
        name = paramName;
    }
    public String getName() {
        return(name);
    }
    public void setMarried(boolean flag) {
        isMarried = flag;
    }
    public boolean isMarried() {
        return (isMarried);
    }
}