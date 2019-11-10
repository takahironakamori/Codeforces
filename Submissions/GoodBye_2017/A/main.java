import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int answer = 0;

    for (int i = 0; i < s.length; i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o') {
        answer++;
      } else if (s[i] == '1' ||s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
        answer++;
      }
    }

    System.out.println(answer);

  }

}