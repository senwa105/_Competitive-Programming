import java.util.Arrays;

// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
public class E0167_TwoSumII {
    public static void main(String[] args) {
        int[] numbers = new int[] {2, 7, 11, 15};
        int target = 9;
        System.out.println(Arrays.toString(twoSum2(numbers, target)));

        numbers = new int[] {-1, 0};
        target = -1;
        System.out.println(Arrays.toString(twoSum2(numbers, target)));
    }

    public static int[] twoSum(int[] numbers, int target) {
        for (int i = 0; i < numbers.length; i++) {
            int complement = target - numbers[i];
            int j = Arrays.binarySearch(numbers, i+1, numbers.length, complement);
            
            if (j > 0)
                return new int[] {i+1, j+1};
        }

        return null;
    }

    public static int[] twoSum2(int[] numbers, int target) {
        int left = 0, right = numbers.length - 1;

        while (left < right) {
            int l = numbers[left], r = numbers[right];

            if (l + r == target)
                return new int[] {left+1, right+1};
            if (l + r < target)
                left++;
            else 
                right--;
        }

        return null;
    }
}
