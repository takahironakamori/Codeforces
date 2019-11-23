import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int answer = s.length - 1;

    for (int i = 0; i < s.length; i++) {
      if (s[i] == '0') {
        answer = i;
        break;
      }
    }

    System.out.println(answer + 1);

  }

}