import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int v = 0;
    int answer = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        v = sc.nextInt();
        if (i == n / 2 || j == n / 2) {
          answer += v;
        } else if (i == j || i == n - 1 - j) {
          answer += v;
        }
      }
    }

    sc.close();

    System.out.println(answer);

  }

}