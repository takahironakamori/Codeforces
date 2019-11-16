import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {
    
      long n = sc.nextLong();

      int c2 = 0;
      int c3 = 0;
      int c5 = 0;

      while (n % 2 == 0) {
        n /= 2;
        c2++;  
      }

      while (n % 3 == 0) {
        n /= 3;
        c3++;  
      }

      while (n % 5 == 0) {
        n /= 5;
        c5++;  
      }

      if (n != 1) {
        System.out.println(-1);
      } else {
        System.out.println(c2 + c3 * 2 + c5 * 3);
      }

    }

    sc.close();

  }

}