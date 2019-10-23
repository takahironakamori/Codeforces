import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
  
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {

      int n = sc.nextInt();
      int[] p = new int[n];
      for (int j = 0; j < n; j++) {
        p[j] = sc.nextInt();
        p[j]--;
      }

      int[] answer = new int[n];
      int[] used = new int[n];

      for (int j = 0; j < n; j++) {
        if (used[j] != 1) {
          Deque<Integer> c = new ArrayDeque<>();
          while (used[j] != 1) {
            c.addLast(j);
            used[j] = 1;
            j = p[j];
          }
          int size = c.size();
          while (!c.isEmpty()) {
            Integer v = c.pollFirst();
            answer[v] = size;
          }
        }
      }

      for (int j = 0; j < n; j++) {
        System.out.print(answer[j] + " ");
      }
      System.out.println("");

    }

    sc.close();

  }

}