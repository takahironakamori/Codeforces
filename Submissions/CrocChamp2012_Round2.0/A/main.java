import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    String[][] v = new String[n][m];
    for (int i = 0; i < n; i++) {
      String V = sc.next();
      v[i] = V.split("");
    }

    sc.close();

    int r = 0;
    int c = 0;

    for (int i = 0; i < n; i++) {
      int acount = 0;
      for (int j = 0; j < m; j++) {
        if (v[i][j].equals("*")) {
          acount++;
        }
      }
      if (acount == 1) {
        r = i;
      }
    }

    for (int i = 0; i < m; i++) {
      int acount = 0;
      for (int j = 0; j < n; j++) {
        if (v[j][i].equals("*")) {
          acount++;
        }
      }
      if (acount == 1) {
        c = i;
      }
    }

    System.out.println((r + 1) + " " + (c + 1));

  }

}