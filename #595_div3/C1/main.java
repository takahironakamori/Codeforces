import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
  
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {

      int n = sc.nextInt();
      
      boolean toContinue = true;
      while (toContinue) {

        boolean ok = true;
        int current = n;

        while (0 < current) {
          if (ok && current % 3 == 2) {
            ok = false;
          }
          current /= 3;
        }

        if (ok) {
          break;
        }
        n++;

      }

      System.out.println(n);

    }

    sc.close();

  }

}