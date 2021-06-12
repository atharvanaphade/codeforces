import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            String s = br.readLine();
            int ret = 0;
       
            for(int i = 0, last = -1; i < s.length(); ++i){
                if(s.charAt(i) == '1'){
                    if(i > 0 && s.charAt(i-1) == '0' && last != -1){
                        ret += i - last - 1;
                    }
                    last = i;
                }
            }
            System.out.println(ret);
        }
    }
}