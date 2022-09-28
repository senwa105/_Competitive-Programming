import java.util.Stack;

public class E350_IntersectionOfTwoArraysII {
    public static int[] intersect(int[] nums1, int[] nums2) {
        int[] counts1 = new int[1001];
        int[] counts2 = new int[1001];
        
        for (int i : nums1)
            counts1[i]++;
        for (int i : nums2)
            counts2[i]++;
        
        Stack<Integer> ans = new Stack<Integer>();
        for (int i = 0; i < 1001; i++) {
            for (int j = 0, min = Math.min(counts1[i], counts2[i]); j < min; j++)
                ans.push(i);
        }
        
        int[] arr = new int[ans.size()];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = ans.pop();
        }
        
        return arr;
    }
}