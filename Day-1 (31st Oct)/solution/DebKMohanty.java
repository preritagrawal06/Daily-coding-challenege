import java.util.*;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();


        for(int i =1 ;i<=n;i++){
            double grade = sc.nextDouble();
            double nm5 = grade%5 ==0 ? Math.floor(grade/5)*5 : (Math.floor(grade/5)*5) +5;
            
            if(grade >= 38 &&nm5-grade < 3.0  ){
                grade = nm5;
            }
            System.out.println(grade);

        }
    }
}
