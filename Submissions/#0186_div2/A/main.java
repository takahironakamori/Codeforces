import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    if (0 <= n) {
      System.out.println(n);
    } else {
      int a1 = n / 10;
      a1 = a1 - (a1 % 10) + (n % 10);
      int a2 = n / 10;
      System.out.println(Math.max(a1, a2));
    }

  }

}