import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String f = sc.next();
    String s = sc.next();
    int n = sc.nextInt();

    System.out.println(f + " " + s);

    for (int i = 0; i < n; i++) {
      String f1 = sc.next();
      String f2 = sc.next();
      if (f.equals(f1)) {
        f = f2;
      } else {
        s = f2;
      }
      System.out.println(f + " " + s);
    }

    sc.close();

  }

}