import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    TreeMap<Integer, Integer> mp = new TreeMap<>();

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      mp.put(i, a - 1);
    }

    sc.close();

    String answer = "NO";

    for (int i = 0; i < n; i++) {
      int v1 = mp.get(i);
      int v2 = mp.get(v1);
      int v3 = mp.get(v2);
      if (i == v3) {
        answer = "YES";
        break;
      }
    }

    System.out.println(answer);

  }

}