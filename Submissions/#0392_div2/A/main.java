import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    int m = 0;
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
      m = Math.max(m, a[i]);
    }
    sc.close();

    int answer = 0;
    for (int i = 0; i < n; i++) {
      answer += Math.abs(m - a[i]);
    }

    System.out.println(answer);

  }

}