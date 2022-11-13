import java.math.BigInteger;

import java.util.Scanner;

public class DebKMohanty{
    static BigInteger factorial(int n){
      BigInteger fact = BigInteger.ONE;
      for(int i=n;i>0;i--){
          fact = fact.multiply(BigInteger.valueOf(i));
      }
      return fact;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger fact = factorial(n);
        System.out.println(fact);
    }
}
