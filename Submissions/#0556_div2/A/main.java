import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int r = sc.nextInt();

    int minS = 1010;
    for (int i = 0; i < n; i++) {
      int s = sc.nextInt();
      minS = Math.min(minS, s);
    }

    int maxB = 0;
    for (int i = 0; i < m; i++) {
      int b = sc.nextInt();
      maxB = Math.max(maxB, b);
    }

    sc.close();

    if (minS < maxB) {
      int count = r / minS;
      r = r % minS + count * maxB;
    }

    System.out.println(r);

  }

}