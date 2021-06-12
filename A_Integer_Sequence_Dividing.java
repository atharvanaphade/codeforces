import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        Scanner t = new Scanner(System.in);
        while(t.hasNext()){
            int j = t.nextInt();
            if (j % 4 <= 2 && j % 4 > 0){
                System.out.println(1);
            }else {
                System.out.println(0);
            }
        }
        t.close();
    }
}