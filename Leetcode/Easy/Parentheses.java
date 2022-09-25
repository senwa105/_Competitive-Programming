import java.util.Stack;

public class Parentheses {
    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == ')') {
                if (stack.pop() == '(')
                    continue;
                return false;
            }      
            if (c == '}') {
                if (stack.pop() == '{')
                    continue;
                return false;
            }  
            if (c == ']') {
                if (stack.pop() == '[')
                    continue;
                return false;
            }            
            stack.push(c);
        }
           
        return stack.empty();
    }

    public static void main(String[] args) {
        String s = "]]]";

        System.out.println(isValid(s));
    }
}
