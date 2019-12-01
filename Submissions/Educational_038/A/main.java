import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    String S = sc.next();

    sc.close();

    char[] s = S.toCharArray();

    String answer = "";
    boolean flg = true;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ) {
        if(flg) {
          answer += s[i];
          flg = false;
        }
      } else {
        answer += s[i];
        flg = true;
      }
    }
    
    System.out.println(answer);
  
  }

}