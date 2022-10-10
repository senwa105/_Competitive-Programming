package Leetcode.Medium;

public class M0142_LinkedListCycleII {
    @SuppressWarnings("unused")
    private class ListNode {
        int val;
        ListNode next;
        ListNode(int x) {
            val = x;
            next = null;
        }
    }

    // Floyd's tortoise and hare algorithm
    public ListNode detectCycle(ListNode head) {
        ListNode fast = head, slow = head;
        
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            
            // cycle detected
            if (fast == slow) {
                ListNode entry = head;
                // the distance from the head to the cycle entry is equal to
                // the distance from the meeting location to the entry (traveling forward)
                while (entry != slow) {
                    entry = entry.next;
                    slow = slow.next;
                }
                return entry;
            }
        }
        
        return null;
    }
}
