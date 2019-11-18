import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String T = sc.next();
    sc.close();

    char[] s = S.toCharArray();
    char[] t = T.toCharArray();

    String answer = "YES";

    int l = S.length();
    int m = T.length();

    if (l != m) {
      answer = "NO";
    }

    if (answer == "YES") {
      for (int i = 0; i < l; i++) {
        if (s[i] != t[l - 1 - i]) {
          answer = "NO";
          break;
        }
      }
    }
    System.out.println(answer);
    
  }

}