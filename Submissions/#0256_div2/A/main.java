import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    double a1 = sc.nextInt();
    double a2 = sc.nextInt();
    double a3 = sc.nextInt();
    double b1 = sc.nextInt();
    double b2 = sc.nextInt();
    double b3 = sc.nextInt();
    double n = sc.nextInt();
    sc.close();

    double a = Math.ceil((a1 + a2 + a3) / 5);
    double b = Math.ceil((b1 + b2 + b3) / 10);

    if ((a + b) <= n) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}