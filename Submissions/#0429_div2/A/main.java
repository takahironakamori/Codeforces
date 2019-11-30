import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int k = sc.nextInt();
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();
    int[] color = new int[26];

    for (int i = 0; i < n; i++) {
      color[s[i] - 'a']++;
    }
  
    String answer = "YES";
  
    for (int i = 0; i < 26; i++) {
      if (k < color[i]) {
        answer = "NO";
      }
    }
  
    System.out.println(answer);

  }

}