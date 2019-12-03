import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    String answer = "YES";

    // true:前の文字が子音 false:子音ではない
    boolean flg = false;

    // true:前の文字がn false:nではない
    boolean isN = false;

    for (int i = 0; i < s.length; i++) {
      if (flg) {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e') {
          if (!isN) {
            answer = "NO";
            break;
          }
        } else {
          flg = false;
        }
      } else {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e') {
          flg = false;
        } else {
          flg = true;
        }
      }
      if (s[i] == 'n') {
        isN = true;
      } else {
        isN = false;
      }
    }

    if (flg) {
      if (!isN) {
        answer = "NO";
      }
    }

    System.out.println(answer);
  
  }

}