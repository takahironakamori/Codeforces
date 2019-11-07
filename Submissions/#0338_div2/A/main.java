import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int[] a = new int[m];
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      for (int j = 0; j < x; j++) {
        int v = sc.nextInt();
        a[v-1]++;
      }
    }
    sc.close();

    String answer = "YES";

    for (int i = 0; i < m; i++) {
      if (a[i] == 0) {
        answer = "NO";
        break;
      }
    }

    System.out.println(answer);

  }

}