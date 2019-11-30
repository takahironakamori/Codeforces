import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    sc.close();

    int answer = 0;
    double v = 0;

    for (int i = 1; i <= n / 2; i++) {
      long g = gcd(i, n - i);
      if (g == 1) {
        if (v < (double) i / (n - i)) {
          v = (double) i / (n - i);
          answer = i;
        }
      }
    }
  
    System.out.println(answer + " " + (n - answer));

  }

  static long gcd(long a, long b) {
    if (b == 0) {
      return a;
    }
    return gcd(b, a % b);
  }

}