import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String N = sc.next();
    sc.close();

    String[] n = N.split("");

    int count = 0;
    for (int i = 0; i < n.length; i++) {
      if (n[i].equals("7") || n[i].equals("4")) {
        count++;
      }
    }

    if (count == 7 || count == 4) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}