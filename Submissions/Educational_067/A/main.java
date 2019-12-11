import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int T = sc.nextInt();

    while (0 < T) {
      int n = sc.nextInt();
      int s = sc.nextInt();
      int t = sc.nextInt();
      System.out.println(Math.max(n - s, n - t) + 1);
      T--;
    }

    sc.close();

  }


}