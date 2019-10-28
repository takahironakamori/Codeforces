import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String V = sc.next();
    sc.close();

    String[] v = V.split("");

    int count = 0;

    for (int i = 0; i < v.length; i++) {
      if (v[i].equals("a")) {
        count++;
      }
    }

    if (count * 2 - 1 < v.length) {
      System.out.println(count * 2 - 1);
    } else {
      System.out.println(v.length);
    }

  }

}