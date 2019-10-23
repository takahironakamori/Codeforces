import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int t = sc.nextInt();
    int[] n = new int[t];
    int[] p = new int[t];
    int[] m = new int[t];
    int[] q = new int[t];

    for (int i = 0; i < t; i++) {
      n[i] = sc.nextInt();
      for (int j = 0; j < n[i]; j++) {
        int v = sc.nextInt();
        if (v % 2 == 0) {
          p[i]++;
        }
      }
      m[i] = sc.nextInt();
      for (int j = 0; j < m[i]; j++) {
        int v = sc.nextInt();
        if (v % 2 == 0) {
          q[i]++;
        }
      }
    } 

    sc.close();

    for (int i = 0; i < t; i++) {
      long a1 = (long) p[i] * (long) q[i];
      long a2 = (long) (n[i] - p[i]) * (long) (m[i] - q[i]);
      System.out.println(a1 + a2);
    }

  }

}