import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int[] a = new int[4];
    a[0] = sc.nextInt();
    a[1] = sc.nextInt();
    a[2] = sc.nextInt();
    a[3] = sc.nextInt();
    
    String S = sc.next();
    
    sc.close();

    String[] s = S.split("");

    int answer = 0;

    for (int i = 0; i < s.length; i++) {
      answer += a[Integer.valueOf(s[i]) - 1];
    }

    System.out.println(answer);

  }

}