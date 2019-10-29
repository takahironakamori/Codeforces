import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int[][] v = new int[n][n];
    for (int i = 0; i < n; i++) {
      for (int l = 0; l < n; l++) {
        if (i == 0 || l == 0) {
          v[i][l] = 1;
        } else {
          v[i][l] = v[i][l-1] + v[i-1][l];
        }
      }
    }

    System.out.println(v[n-1][n-1]);

  }

}