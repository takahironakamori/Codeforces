import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();

    HashMap<Integer, Integer> map = new HashMap<>();
    Deque<Integer> deque = new ArrayDeque<>();
    
    for (int i = 0; i < n; i++) {
      int v = sc.nextInt();
      if (map.containsKey(v)) {
        if (map.get(v) == 0) {
          deque.addFirst(v);
          map.put(v, 1);
        }
      } else {
        deque.addFirst(v);
        map.put(v, 1);
      }
      if (k < deque.size()) {
        int b = deque.getLast();
        map.put(b, 0);
        deque.pollLast();
      }
      
    }

    sc.close();

    System.out.println(deque.size());
    int li_count = 0;
    PrintWriter out = new PrintWriter(System.out);
    for (Integer value : deque) {
      out.print(value);
      li_count++;
      if (li_count == deque.size()) {
        out.println("");
      } else {
        out.print(" ");
      }
    }
    out.flush();

  }

}