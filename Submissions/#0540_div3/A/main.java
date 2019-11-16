import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {
      long n = sc.nextLong();
      long a = sc.nextLong();
      long b = sc.nextLong();

      long answer = 0;

      if (a * 2 < b) {
        answer = n * a;
      } else {
        answer = n / 2 * b + (n % 2) * a;
      }

      System.out.println(answer);
    }

    sc.close();
  }

}