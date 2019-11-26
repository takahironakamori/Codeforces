import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    for (int i = 1; i <= 1000; i++) {
      boolean flg = is_prime(n * i + 1);
      if (flg == false) {
        System.out.println(i);
        return;
      }
    }

    return;

  }

  static boolean is_prime (long N) {
    for (long i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return N != 1;
  }

}