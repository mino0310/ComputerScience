public class ControlSwitch {
    public static void main(String[] args) {
        ControlSwitch sample = new ControlSwitch();
        sample.switchStatement2(1);
        sample.switchStatement2(2);
        sample.switchStatement2(3);
        sample.switchStatement2(4);
        sample.switchStatement2(5);
    }

    public void switchStatement(int numberOfWheel) {
        switch (numberOfWheel) {
            case 1:
            System.out.println(numberOfWheel + ":It is one foot bicycle");
            break ;
            case 2:
            System.out.println(numberOfWheel + ":It is a motor cycle or bicycle");
            break;
            case 3:
            System.out.println(numberOfWheel + ":It is a three wheel car");
            break;
            case 4:
            System.out.println(numberOfWheel + ":It is a car");
            break;
            case default:
            System.out.println(numberOfWheel + ":It is a expensive car");
            break;
        }
    }
    public void switchStatement2(int numberOfWheel) {
        switch (numberOfWheel) {
            case 1:
            System.out.println(numberOfWheel + ":It is one foot bicycle");
            //break ;
            case 2:
            System.out.println(numberOfWheel + ":It is a motor cycle or bicycle");
            //break;
            case 3:
            System.out.println(numberOfWheel + ":It is a three wheel car");
            break;
            case 4:
            System.out.println(numberOfWheel + ":It is a car");
            break;
            case default:
            System.out.println(numberOfWheel + ":It is a expensive car");
            break;
        }
    }
}