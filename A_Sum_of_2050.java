import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class A_Sum_of_2050 {
    public static void main (String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while (tc-->0){
            String s = sc.next();
            BigInteger x = new BigInteger(s);
            BigInteger y = new BigInteger("2050");
            BigInteger q=x.divide(y);
            BigInteger z=x.mod(y);
            if(z.intValue()!=0) {
            	System.out.println("-1");
            	continue;
            }
            int sum = 0;
            for(int i=0;i<q.toString().length();i++){
                sum+=Integer.parseInt(q.toString().substring(i,i+1));
            }
            System.out.println(sum);
        }
    }
}