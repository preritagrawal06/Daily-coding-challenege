import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if(str.matches("[a-bA-z ]*")){
            System.out.println("Pangram");
        }
        else{
            System.out.println("No Pangram");
        }
    }
}
