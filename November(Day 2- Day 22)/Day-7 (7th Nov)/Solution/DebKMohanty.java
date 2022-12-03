
import java.util.Scanner;


public class DebKMohantyPangram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        str = str.toLowerCase();
        for (char a = 'a';a<='z';a++){
            if(str.indexOf(a) < 0){
                System.out.println("Not Pangram");
                System.exit(0);
            }
        }
        System.out.println("Pangram");

    }
}
