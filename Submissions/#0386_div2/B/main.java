import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String s = sc.next();
    sc.close();

    StringBuilder answer = new StringBuilder(s.substring(n - 1));

    for (int i = 2; i <= n; i++) {
      String s_ = s.substring(n - i, n - i + 1);
      answer.insert(answer.length() / 2, s_);
    }

    System.out.println(answer.toString());

  }

}