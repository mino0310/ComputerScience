public class ReferenceConstructor {
    public static void main(String args[]) {
        ReferenceConstructor sample = new ReferenceConstructor();
        sample.makeMemberObject();
    }
    public void makeMemberObject() {
        MemberDTO dto1 = new MemberDTO();
        MemberDTO dto2 = new MemberDTO("mino");
        MemberDTO dto3 = new MemberDTO("mino", "01012341234");
        MemberDTO dto4 = new MemberDTO("mino", "01012341234", "mino@naver.com");
    }
}