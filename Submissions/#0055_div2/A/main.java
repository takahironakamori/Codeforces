import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();
    String u = S.toUpperCase();
    String l = S.toLowerCase();

    int ucount = 0;

    for (int i = 0; i < s.length; i++) {
      int v = (int) s[i];
      if (v <= 90) {
        ucount++;
      }
    }

    if (ucount <= s.length / 2) {
      System.out.println(l);
    } else {
      System.out.println(u);
    }

  }

}