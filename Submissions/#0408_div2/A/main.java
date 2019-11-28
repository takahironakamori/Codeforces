import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();
    int k = sc.nextInt();

    int answer = 10000;

    for (int i = 1; i <= n; i++) {
      int a = sc.nextInt();

      if (a != 0 && a <= k) {
        answer = Math.min(answer, Math.abs(m - i) * 10);
      }
      
    }

    sc.close();

    System.out.println(answer);

  }

}