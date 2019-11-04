import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int s = sc.nextInt();

    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    Arrays.sort(a);

    int w = 0;
    for (int i = 0; i < n - 1; i++) {
      w += a[i];
    }

    if (w <= s) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}