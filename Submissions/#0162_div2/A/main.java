import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String T = sc.next();
    sc.close();

    String[] s = S.split("");
    String[] t = T.split("");

    int answer = 0;
    for (int i = 0; i < t.length; i++) {
      if (s[answer].equals(t[i])) {
        answer++;
      }
    }
    
    System.out.println(answer + 1);

  }

}