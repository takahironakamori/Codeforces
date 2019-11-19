import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    String answer = "NO";

    for (int i = 0; i < s.length; i++) {
      if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
        answer = "YES";
        break;
      }
    }

    System.out.println(answer);

  }

}