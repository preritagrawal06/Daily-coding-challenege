import java.util.*;

public class DebKMohanty {
    public static void main(String[] args) {
        ArrayList<Integer> al = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int countP=0,countN=0,countZ=0;
        for(int i=0;i<n;i++){
            al.add(sc.nextInt());
        }
        for(int i=0;i<n;i++){
            if(al.get(i)<0){
                countN++;
            }
            else if(al.get(i)>0){
                countP++;
            }
            else if(al.get(i)==0){
                countZ++;

            }

        }
        System.out.println((float)(countP)/al.size());
        System.out.println((float)(countN)/al.size());
        System.out.println((float)(countZ)/al.size());

    }
}
