import java.util.ArrayList;
import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> al = new ArrayList<>();
        for(int i=0;i<n;i++){
            int a = sc.nextInt();
            al.add(a);
        }
        int d = sc.nextInt(),m=sc.nextInt(),result=0;
        for(int i=0;i<n-m+1;i++){
            int sum=0;
            for(int j=i;j<i+m;j++){
                sum+=al.get(j);
            }
            if(sum==d){
                result++;
            }
        }
        System.out.println(result);
    }
}
