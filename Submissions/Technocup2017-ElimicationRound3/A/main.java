import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int k = sc.nextInt();
    sc.close();

    int desks = 0;
    int lanes = 0;
    int count = 0;

    String p = "";

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        for (int l = 0; l < 2; l++) {
          count++;
          if (count == k) {
            desks = i;
            lanes = j;
            if (l == 0) {
              p = "L";
            } else {
              p = "R";
            }
          }
        }
      }
    }

    System.out.println(desks + " " + lanes + " " + p);

  }

}