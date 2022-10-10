@SuppressWarnings("unused")

public class E0141_LinkedListCycle {
    private class ListNode {
        int val;
        ListNode next;
        ListNode(int x) {
            val = x;
            next = null;
        }
    }

    // Floyd's tortoise and hare algorithm
    public boolean hasCycle(ListNode head) {
        ListNode fast = head, slow = head;
        
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            
            if (fast == slow) return true;
        }
        
        return false;
    }
}
