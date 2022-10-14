public class E0704_BinarySearch {
    public int search(int[] nums, int target) {
        return binarySearch(nums, target, 0, nums.length);
    }

    private static int binarySearch(int[] a, int target, int l, int r) {
        if (r <= l) return -1;

        int mid = (l + r) / 2;
        if (a[mid] == target) return mid;
        else if (a[mid] > target) return binarySearch(a, target, l, mid);
        else return binarySearch(a, target, mid+1, r);
    }
}
