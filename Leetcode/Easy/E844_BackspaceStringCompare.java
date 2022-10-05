import java.util.Stack;

class E844_BackspaceStringCompare {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> stackS = new Stack<Character>();
        Stack<Character> stackT = new Stack<Character>();

        // compute final string for s
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '#') {
                if (stackS.isEmpty()) continue;
                else stackS.pop();
            }
            else stackS.push(c);
        }
        // compute final string for t
        for (int i = 0; i < t.length(); i++) {
            char c = t.charAt(i);
            if (c == '#') {
                if (stackT.isEmpty()) continue;
                else stackT.pop();
            }
            else stackT.push(c);
        }

        return stackS.equals(stackT);
    }
}