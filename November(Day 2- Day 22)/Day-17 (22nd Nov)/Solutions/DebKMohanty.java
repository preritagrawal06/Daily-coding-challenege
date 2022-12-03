import java.util.*;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int N = sc.nextInt();
            int count = 0;
            String s = sc.next();
            for(int i =0;i<N-1;i++){
                if(s.charAt(i) == '1' && s.charAt(i+1) ==0){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
