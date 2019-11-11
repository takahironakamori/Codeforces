import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int[] count = new int[26];

    for (int i = 0; i < n; i++) {
      int l = (int) s[i];
      count[l - 65]++;
    }

    int answer = count[0];

    for (int i = 1; i < k; i++) {
      answer = Math.min(answer, count[i]);
    }

    System.out.println(answer * k);

  }

}