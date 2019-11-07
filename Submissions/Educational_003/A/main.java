import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    Integer[] a = new Integer[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    Arrays.sort(a, Comparator.reverseOrder());

    int answer = 0;
    for (int i = 0; i < n; i++) {
      if (0 < m) {
        answer++;
        m -= a[i];
      }
    }

    System.out.println(answer);

  }

}