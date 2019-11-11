import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    String[] s = S.split("");

    int[] num = new int[10];

    for (int i = 0; i < n; i++) {
      int v = Integer.valueOf(s[i]);
      num[v]++; 
    }

    System.out.println(Math.min(n / 11, num[8]));
    
  }

}