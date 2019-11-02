import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int d = sc.nextInt();

    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    int answer = 0;

    Deque<Integer> que = new ArrayDeque<>();
    for (int i = 0; i < n; i++) {
      que.clear();
      que.addLast(a[i]);
      for (int j = 0; j < n; j++) {
        if (i != j) {
          if (Math.abs(a[i] - a[j]) <= d) {
            que.addLast(a[j]);
          }
        }
      }
      answer += que.size() - 1;
    }

    System.out.println(answer);

  }

}