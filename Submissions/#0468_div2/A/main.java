import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    sc.close();

    int d = Math.abs(a - b);

    if (d % 2 == 0) {
      d /= 2;
      System.out.println(d * (d + 1));
    } else {
      d /= 2;
      System.out.println(d * (d + 1) + d + 1);
    }

  }

}