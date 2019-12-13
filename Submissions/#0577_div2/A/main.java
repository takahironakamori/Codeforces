import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    int[][] count = new int[m][5];

    for (int i = 0; i < n; i++) {
      String S = sc.next();
      char[] s = S.toCharArray();
      for (int j = 0; j < m; j++) {
        count[j][(int) s[j] - 'A']++;
      }
    }
  
    int answer = 0;
    int[] mx = new int[m];

    for (int i = 0; i < m; i++) {
      int p = sc.nextInt();
      for (int j = 0; j < 5; j++) {
        mx[i] = Math.max(mx[i], count[i][j]);
      }
      answer += mx[i] * p;
    }

    sc.close();

    System.out.println(answer);

  }

}