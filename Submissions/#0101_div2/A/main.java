import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String T = sc.next();
    String R = sc.next();
    sc.close();

    char[] s = S.toCharArray();
    char[] t = T.toCharArray();
    char[] r = R.toCharArray();

    int[] countA = new int[26];

    for (int i = 0; i < s.length; i++) {
      int v =(int) s[i] - 65;
      countA[v]++;
    }
  
    for (int i = 0; i < t.length; i++) {
      int v =(int) t[i] - 65;
      countA[v]++;
    }

    int[] countB = new int[26];

    for (int i = 0; i < r.length; i++) {
      int v =(int) r[i] - 65;
      countB[v]++;
    }

    String answer = "YES";

    for (int i = 0; i < 26; i++) {
      if (countA[i] != countB[i]){
        answer = "NO";
        break;
      }
    }

    System.out.println(answer);

  }

}