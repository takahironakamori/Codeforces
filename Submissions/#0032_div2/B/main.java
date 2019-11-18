import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    String answer = "";

    boolean flg = false;

    for (int i = 0; i < s.length; i++) {
      if (s[i] == '.') {
        if (flg == false) {
          answer += "0";
        } else {
          answer += "1";
          flg = false;
        }
      } else if (s[i] == '-') {
        if (flg == false) {
          flg = true;
        } else {
          answer += "2";
          flg = false;
        }
      }
    }

    System.out.println(answer);
    
  }

}