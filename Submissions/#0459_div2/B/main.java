import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();

    TreeMap<String, String> mp = new TreeMap<>();

    for (int i = 0; i < n; i++) {
      String a = sc.next();
      String b = sc.next();
      b += ";";
      mp.put(b, a);
    }

    for (int i = 0; i < m; i++) {
      String c = sc.next();
      String d = sc.next();
      System.out.println(c + " " + d + " #" + mp.get(d));
    }

    sc.close();
  
  }

}