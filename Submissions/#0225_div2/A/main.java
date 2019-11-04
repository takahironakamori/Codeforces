import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    Deque<Integer> que = new ArrayDeque<>();
    for (int i = 0; i < n; i++) {
      int v = sc.nextInt();
      que.addLast(v);
    }
    sc.close();

    int first = 0;
    int second = 0;
    int current = 0;

    while (!que.isEmpty()) {

      int f = que.peekFirst();
      int b = que.peekLast();
      int v = 0;

      if (b < f){
        v = f;
        que.pollFirst();
      } else {
        v = b;
        que.pollLast();
      }
      if (current % 2 == 0){
        first += v;
      } else {
        second += v;
      }
      current++;
    }

    System.out.println(first + " " + second);

  }

}