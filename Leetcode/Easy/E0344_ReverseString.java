import java.util.Arrays;

// https://leetcode.com/problems/reverse-string/
public class E0344_ReverseString {
    public static void main(String[] args) {
        char[] s = new char[] {'p', 'e', 't'};
        char[] t = new char[] {'p', 'e', 't', 's'};

        reverseString(s);
        reverseString(t);
        System.out.println(Arrays.toString(s));
        System.out.println(Arrays.toString(t));
    }

    public static void reverseString(char[] s) {
        int len = s.length;
        
        for (int i = 0; i < len/2; i++) {
            char temp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = temp;
        }
    }
}
