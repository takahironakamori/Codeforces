import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    String[] s = S.split("");

    int[] count = new int[4];
    for (int i = 0; i < s.length; i++) {
      if (i % 2 == 0) {
        count[Integer.parseInt(s[i])]++;
      }
    }

    String answer = "";

    for (int i = 1; i < 4; i++) {
      for (int j = 0; j < count[i]; j++) {
        answer += String.valueOf(i) + "+";
      }
    }

    System.out.println(answer.substring(0, answer.length() - 1));

  }

}