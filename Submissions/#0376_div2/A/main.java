import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int answer = 0;
    int current = 1;
    for (int i = 0; i < S.length(); i++) {
      int next = (int) s[i] - 96;
      answer += Math.min(Math.abs(current - next), 26 - Math.abs(current - next));
      current = next;
    }

    System.out.println(answer);

  }

}