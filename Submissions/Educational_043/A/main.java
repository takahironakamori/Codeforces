import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    String[] s = S.split("");

    int[] v = new int[2];

    for (int i = 0; i < n; i++) {
      int l = Integer.valueOf(s[i]);
      v[l]++;
    }

    if (S.equals("0")) {
      System.out.println("0");
    } else {
      System.out.print("1");
      for (int i = 0; i < v[0]; i++) {
        System.out.print("0");
      }
      System.out.println("");
    }

  }

}