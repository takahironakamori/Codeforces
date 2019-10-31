import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {
      int n = sc.nextInt();
      String S = sc.next();
      String[] s = S.split("");
      String answer = "NO";
      for (int j = 0; j < n; j++) {
        if (s[j].equals("8") && j + 10 < n) {
          answer = "YES";
          break;
        }
      }
      System.out.println(answer);
    }

    sc.close();

  }

}