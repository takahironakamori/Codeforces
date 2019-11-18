import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    String F = sc.next();
    String S = sc.next();
    sc.close();

    String[] f = F.split("");
    String[] s = S.split("");

    for (int i = 0; i < f.length; i++) {
      int answer = Integer.valueOf(f[i]) ^ Integer.valueOf(s[i]);
      System.out.print(answer);
    }

    System.out.println("");

  }

}