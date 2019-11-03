import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int v = (int) s[0];
    if (90 < v) {
      char[] s2 = Character.toChars(v - 32);
      s[0] = s2[0];
    }
    
    for (int i = 0; i < s.length; i++) {
      System.out.print(s[i]);
    }

    System.out.println("");

  }

}