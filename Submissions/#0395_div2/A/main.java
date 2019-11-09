import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    long m = sc.nextLong();
    long z = sc.nextLong();
    sc.close();

    long l = lcm(n, m);

    long answer = z / l;

    System.out.println(answer);

  }

  static long gcd(long a, long b) {

    if (b == 0) {
      return a;
    }

    return gcd(b, a % b);

  }

  static long lcm(long a, long b) {

    return a / gcd(a, b) * b;

  }

}