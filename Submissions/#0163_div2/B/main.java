import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int t = sc.nextInt();
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    for (int i = 0; i < t; i++) {
      boolean flg = false;
      for (int j = 0; j < n - 1; j++) {
        if (s[j] == 'B' && s[j + 1] == 'G' && flg == false) {
          char s_ = s[j];
          s[j] = s[j + 1];
          s[j + 1] = s_;
          flg = true;
        } else {
          flg = false;
        }
      }
    }

    for (int i = 0; i < s.length; i++) {
      System.out.print(s[i]);
    }

    System.out.println("");

  }

}