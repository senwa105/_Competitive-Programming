package Leetcode.Medium;

import java.util.LinkedList;
import java.util.Queue;

public class M1823_FindTheWinnerOfTheCircularGame {
    public static int findTheWinner(int n, int k) {
        Queue<Integer> survivors = new LinkedList<Integer>();

        for (int i = 1; i <= n; i++)
            survivors.add(i);

        while (survivors.size() > 1) {
            for (int i = 0; i < k-1; i++)
                survivors.add(survivors.remove());
            survivors.remove();
        }

        return survivors.remove();
    }

    public static void main(String[] args) {
        System.out.println(findTheWinner(6, 5));
    }
}
