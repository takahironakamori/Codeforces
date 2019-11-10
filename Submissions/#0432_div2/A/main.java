import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    int t = sc.nextInt();
    sc.close();

    if (t <= k) {
      System.out.println(t);
    } else if (t <= n) {
      System.out.println(k);
    } else {
      System.out.println(k - (t - n));
    }

  }

}