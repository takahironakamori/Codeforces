import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    String[] s = S.split("");

    int answer = 0;
    for (int i = 0; i < n - 1; i++) {
      if (s[i].equals(s[i+1])) {
        answer++;
      }
    }
    
    System.out.println(answer);

  }

}