import java.util.Queue;
import java.util.LinkedList;

class E0225_ImplementStackUsingQueues {
    private Queue<Integer> top;         // holds the top item
    private Queue<Integer> bottom;      // holds rest of stack

    public E0225_ImplementStackUsingQueues() {
        top = new LinkedList<Integer>();     
        bottom = new LinkedList<Integer>();  
    }
    
    public void push(int x) {
        swapQueues();
        while (!top.isEmpty())
            bottom.add(top.remove());
        top.add(x);
    }
    
    public int pop() {
        if (!bottom.isEmpty())
            top.add(bottom.remove());
        return top.remove();
    }
    
    public int top() {
        return top.peek();
    }
    
    public boolean empty() {
        return top.isEmpty() && bottom.isEmpty();
    }

    private void swapQueues() {
        Queue<Integer> temp = top;
        top = bottom;
        bottom = temp;
    }

    public static void main(String[] args) {
        E0225_ImplementStackUsingQueues stack = new E0225_ImplementStackUsingQueues();
        stack.push(1);
        System.out.println(stack.pop());
        System.out.println(stack.empty());
    }
}