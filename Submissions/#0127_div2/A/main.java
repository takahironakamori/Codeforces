import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int[] a = new int[26];
    for (int i = 0; i < s.length; i++) {
      a[(int) s[i] - 97]++;
    }

    for (int i = 25; 0 <= i; i--) {
      if (a[i] != 0) {
        for (int j = 0; j < a[i]; j++) {
          System.out.print(Character.toChars(i + 97));
        }
        break;
      }
    }

    System.out.println("");

  }

}