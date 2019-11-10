import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] a = new int[n];
    int[] num = new int[1010];

    for (int i = 0; i < n; i++) {
      int v = sc.nextInt();
      num[v]++;
      a[i] = v;
    }

    int count = 0;
    Deque<Integer> answer = new ArrayDeque<>();
    for (int i = n - 1; 0 <= i; i--) {
      if (1 <= num[a[i]]) {
        answer.addLast(a[i]);
        count++;
        num[a[i]] = 0;
      }
    }

    System.out.println(count);

    while (!answer.isEmpty()) {
      Integer v = answer.pollLast();
      System.out.print(v + " ");
    }

    System.out.println("");

  }

}