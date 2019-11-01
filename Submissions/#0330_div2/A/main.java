import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        if (l == 1 || r == 1) {
          count++;
        }
      }
    }

    sc.close();

    System.out.println(count);

  }

}