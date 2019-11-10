import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int K = sc.nextInt();
    
    int m = 0;

    for (int i = 0; i < K; i++) {
      int r = sc.nextInt();
      m = Math.max(m, r);
    }

    sc.close();

    if (25 < m) {
      System.out.println(m - 25);
    } else {
      System.out.println(0);
    }

  }

}