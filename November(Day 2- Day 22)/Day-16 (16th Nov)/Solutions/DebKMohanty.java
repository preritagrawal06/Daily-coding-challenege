import java.util.*;
public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] sq = new int[9];
        for (int i = 0; i < 9; i++) {
            sq[i] = sc.nextInt();
        }
        int[][] matrix={{4,9,2,3,5,7,8,1,6},
                {2,7,6,9,5,1,4,3,8},
                {6,1,8,7,5,3,2,9,4},
                {8,3,4,1,5,9,6,7,2},
                {2,9,4,7,5,3,6,1,8},
                {6,7,2,1,5,9,8,3,4},
                {8,1,6,3,5,7,4,9,2},
                {4,3,8,9,5,1,2,7,6}};

        int mO = 99;
        for (int i = 0; i < 8; i++) {
            int o= 0;
            for (int j = 0; j < 9; j++) {
                if (sq[j] != matrix[i][j]) {
                    o += Math.abs(sq[j] - matrix[i][j]);
                }
            }
            if (o < mO) mO = o;
        }

        System.out.println(mO);
    }
}

