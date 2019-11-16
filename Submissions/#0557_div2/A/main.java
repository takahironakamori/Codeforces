import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int h = sc.nextInt();
    int m = sc.nextInt();

    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = h;
    }
  
    for (int i = 0; i < m; i++) {
      int l = sc.nextInt();
      int r = sc.nextInt();
      int x = sc.nextInt();
      for (int j = l; j <= r; j++) {
        a[j - 1] = Math.min(a[j - 1], x);
      }
    }

    sc.close();

    int answer = 0;

    for (int i = 0; i < n; i++) {
      answer += a[i] * a[i];
    }

    System.out.println(answer);

  }

}