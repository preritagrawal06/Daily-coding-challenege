import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class DebKMohanty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Date date = null;
        DateFormat iF = new SimpleDateFormat("hh:mm:ssaa");
        DateFormat oF = new SimpleDateFormat("HH:mm:ss");

        try{
            date = iF.parse(s);
        }catch(Exception e){
            System.out.println(e);
        }
        if(date!=null){
            String nD = oF.format(date);
            System.out.println(nD);
        }
    }
}
