import java.util.Stack;

public class E0020_ValidParentheses {
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(') {
                stack.push(')');
                continue;
            }
                
            if (c == '{') {
                stack.push('}');
                continue;
            }
                
            if (c == '[') {
                stack.push(']');
                continue;
            }
                
            if (stack.empty() || c != stack.pop())
                return false;
        }
           
        return stack.empty();
    }

    public static void main(String[] args) {
        String s = "]]]";

        System.out.println(isValid(s));
    }
}
