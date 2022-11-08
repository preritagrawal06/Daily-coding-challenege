import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr [][] = new int[n][n];
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        int sum1=0,sum2=0;
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                if(i==j){
                    sum1+=arr[i][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (i+j == n-1){
                    sum2+=arr[i][j];
                }
            }
        }
        System.out.println(Math.abs(sum1-sum2));
       
        

    }
}