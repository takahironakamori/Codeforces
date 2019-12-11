import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] count = new int[26];
    for (int i = 0; i < n; i++) {
      String S = sc.next();
      char[] s = S.toCharArray();
      count[(int) s[0] - 97]++;
    }

    sc.close();

    int answer = 0;
    for (int i = 0; i < 26; i++) {
      int class1 = count[i] / 2;
      int class2 = count[i] - class1;
      answer += class1 * (class1 - 1) / 2;
      answer += class2 * (class2 - 1) / 2;
    }

    System.out.println(answer);

  }

}