import java.util.*;
 
public class Main {
 
  static int mod = 1000000000 + 7;
 
  public static void main (String[] args) {
 
    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    long m = sc.nextLong();
    sc.close();
 
    System.out.println(big_pow(big_pow(2,m) - 1, n));
 
  }
 
  static long big_pow(long x, long y) {
   long ans = 1;
   x = x % mod;
   while (0 < y) {
       if (y % 2 == 1) {
           ans = (ans * x) % mod;
       }
       y = y / 2;
       x = (x * x) % mod;
   } 
   return ans;
 
  }
 
}