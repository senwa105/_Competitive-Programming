import java.util.Stack;
// import java.util.HashMap;
// import java.util.ArrayList;

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

    /* 
    pzhang15's solution
    My solution ends up being faster, but this solution should scale better
    once the overhead of the HashMap becomes irrelevant
    */ 
    // public static int[] intersect(int[] nums1, int[] nums2) {
    //     HashMap<Integer, Integer> map = new HashMap<>();
    //     for(int i : nums1){
    //         int freq = map.getOrDefault(i, 0);
    //         map.put(i, freq + 1);
    //     }
    //     ArrayList<Integer> list = new ArrayList<>();
    //     for(int i : nums2){
    //         if(map.get(i) != null && map.get(i) > 0){
    //             list.add(i);
    //             map.put(i, map.get(i) - 1);
    //         }
    //     }
    //     int[] ret = new int[list.size()]; 
    //     for(int i = 0; i < list.size();i++){
    //         ret[i] = list.get(i);
    //     }
    //     return ret;
    // }
}