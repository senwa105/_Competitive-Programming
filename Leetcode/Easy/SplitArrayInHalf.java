import java.util.Arrays;

public class SplitArrayInHalf {
    public static void main(String[] args) {
        int[] a = new int[] {};
        int[] b = new int[] {1};
        int[] c = new int[] {1, 2};
        int[] d = new int[] {1, 2, 3};

        printHalves(a);
        printHalves(b);
        printHalves(c);
        printHalves(d);
    }

    static void printHalves(int[] arr) {
        int mid = arr.length / 2;
        int[] half1 = Arrays.copyOfRange(arr, 0,   mid);
        int[] half2 = Arrays.copyOfRange(arr, mid, arr.length);

        System.out.print(Arrays.toString(arr) + " -> ");
        System.out.print(Arrays.toString(half1) + " ");
        System.out.println(Arrays.toString(half2));
    }
}
