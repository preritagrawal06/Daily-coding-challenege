import java.util.*;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt(),d=sc.nextInt(),sum=0;
        ArrayList<Integer> al = new ArrayList<>(n);
        for(int i =0;i<n;i++)
            al.add(sc.nextInt());

        Collections.sort(al);
        for(int i=0;i<n-2;++i){
            for(int j=i+1;j<n-1;++j){
                if(al.get(j)-al.get(i) == d){
                    for(int k=i+2;k<n;++k){
                        if(al.get(k)-al.get(j) == d){
                            ++sum;
                            break;
                        }
                    }
                }
                
            }
            
        }
        System.out.println(sum);


    }
}
