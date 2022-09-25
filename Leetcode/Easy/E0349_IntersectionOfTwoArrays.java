import java.util.HashSet;
import java.util.Set;

public class E0349_IntersectionOfTwoArrays {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1 = new HashSet<Integer>();
        Set<Integer> set2 = new HashSet<Integer>();
        
        for (int i : nums1)
            set1.add(i);
        for (int i : nums2)
            set2.add(i);
        
        set1.retainAll(set2);
        
        int[] intersection = new int[set1.size()];
        int i = 0;
        for (Integer integer : set1)
            intersection[i++] = integer;
        
        return intersection;
    }
}