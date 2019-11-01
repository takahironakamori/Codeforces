import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    String S = sc.next();
    String[] s = S.split("");

    for (int i = 0; i < m; i++) {
      int l = sc.nextInt();
      int r = sc.nextInt();
      String c1 = sc.next();
      String c2 = sc.next();
      for (int j = l - 1; j < r; j++) {
        if (s[j].equals(c1)) {
          s[j] = c2;
        }
      }
    }

    sc.close();

    for (int i = 0; i < n; i++) {
      System.out.print(s[i]);
    }

    System.out.println("");
  }

}