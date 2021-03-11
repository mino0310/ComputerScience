public class OperatorConditionalTriple {
    public static void main(String[] args) {

    }
    public boolean doBlindDate(int point) {
        boolean doBlindDateFlag = false;
        doBlindDateFlag = (point >= 80) ? true : false;
        System.out.println(point + " : " + doBlindDateFlag);
        return doBlindDateFlag;
    }
}