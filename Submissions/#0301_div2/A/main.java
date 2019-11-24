import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S1 = sc.next();
    String S2 = sc.next();
    sc.close();

    char[] s1 = S1.toCharArray();
    char[] s2 = S2.toCharArray();

    int answer = 0;
    for (int i = 0; i < n; i++) {
      answer += Math.min(10 - Math.abs(s1[i] - s2[i]), Math.abs(s1[i] - s2[i]));
    }
    
    System.out.println(answer);

  }

}