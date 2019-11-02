import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    int[] x = new int[n];
    for (int i = 0; i < n; i++) {
      x[i] = sc.nextInt();
    }

    int[] y = new int[m];
    for (int i = 0; i < m; i++) {
      y[i] = sc.nextInt();
    }

    sc.close();

    Deque<Integer> que = new ArrayDeque<>();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (x[i] == y[j]) {
          que.addLast(x[i]);
        }
      }
    }

    while (!que.isEmpty()) {
      Integer v = que.pollFirst();
      System.out.print(v + " ");
    }

    System.out.println("");

  }

}