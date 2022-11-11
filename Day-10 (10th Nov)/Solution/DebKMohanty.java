import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> al = new ArrayList<>();
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int a = sc.nextInt();
            al.add(a);
        }
        Collections.sort(al);
        int count =0;
        for(int i=0;i<n-1;i++){
            if(al.get(i) == al.get(i+1)){
                count++;
                i+=1;
            }
        }
        System.out.println(count);

    }
}
