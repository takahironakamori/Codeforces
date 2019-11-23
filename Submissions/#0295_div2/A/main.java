import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int[] count = new int[26];

    for (int i = 0; i < n; i++) {
      int s_ =(int) s[i];
      if (65 <= s_ && s_ <= 90) {
        count[s_ - 65]++;
      } else {
        count[s_ - 97]++;
      }
    }

    String answer = "YES";
  
    for (int i = 0; i < 26; i++) {
      if (count[i] == 0) {
        answer = "NO";
        break;
      }
    }
    
    System.out.println(answer);

  }

}