import java.util.ArrayList;

import java.util.Collections;
import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        ArrayList<Long> sum = new ArrayList<>();
        int min =0,max=0;
        Scanner sc = new Scanner(System.in);
        ArrayList<Long> al = new ArrayList<>();
        for(int i=0;i<5;i++){
            Long a = sc.nextLong();
            al.add(a);
        }
        Collections.sort(al);
        for(int i = 0;i<4;i++){
            min += al.get(i);
        }
        for(int i = 1;i<5;i++){
            max += al.get(i);
        }
        System.out.println(min+" "+max);
    }
}
