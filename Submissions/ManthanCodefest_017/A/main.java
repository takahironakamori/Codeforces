import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    TreeMap<String, Integer> hashmap = new TreeMap<>();

    for (int i = 0; i < n; i++) {
      String v = sc.next();
      if (hashmap.containsKey(v) == false) {
        hashmap.put(v, 1);
        System.out.println("NO");
      } else {
        System.out.println("YES");
      }
    }

  }

}