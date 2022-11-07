import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int p = sc.nextInt();
        int f = p/2;
        int b = n%2 == 0 ? (n-p+1)/2 :(n-p)/2;
        System.out.println(Math.min(f,b));
    }
}