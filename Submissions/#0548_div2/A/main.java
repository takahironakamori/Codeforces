import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    String[] s = S.split("");

    int answer = 0;
    for (int i = 0; i < n; i++) {
      if (Integer.valueOf(s[i]) % 2 == 0) {
        answer += i + 1;
      }
    }

    System.out.println(answer);

  }

}