import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a =sc.nextDouble(),b=sc.nextDouble();
        int count =0;
        int low=(int)Math.ceil(Math.sqrt(a));
        int high=(int)Math.floor(Math.sqrt(b));
        count = high-low +1;
        System.out.println(count);
            }
}
