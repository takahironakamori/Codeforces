import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    Deque<Integer> que = new ArrayDeque<>();
    for (int i = 1; i < n; i++) {
      if (a[i] <= a[i-1]) {
        que.addLast(a[i-1]);
      }
    }
    que.addLast(a[n-1]);
  
    System.out.println(que.size());

    while (!que.isEmpty()) {
      Integer v = que.pollFirst();
      System.out.print(v + " ");
    }

    System.out.println("");
  
  }

}