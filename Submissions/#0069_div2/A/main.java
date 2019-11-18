import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int y = sc.nextInt();
    sc.close();

    String answer = "NO";

    for (int i = x + 1; i <= y; i++) {
      if (is_prime(i)) {
        if (i == y) {
          answer = "YES";
        }
        break;
      }
    }

    System.out.println(answer);

  }

  static boolean is_prime (int N) {
    for (int i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return N != 1;
  }

}