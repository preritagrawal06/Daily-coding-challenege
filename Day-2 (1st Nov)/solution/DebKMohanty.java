import java.util.*;

public class DebKMohantyB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> al = new ArrayList<>();
        int n = sc.nextInt();
        int count = 0;
        for (int i=0;i<n;i++){
            int a = sc.nextInt();
            al.add(a);
        }
        int max = al.get(0);
        for(int i =0 ;i<n;i++){
            if(max < al.get(i)  ){
                max = al.get(i);
            }

        }
        for(int i = 0 ;i<n;i++){
            if(max == al.get(i))
                count++;
        }
        System.out.println(count);

    }
}
