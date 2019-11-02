import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int w = sc.nextInt();
    int h = sc.nextInt();
    int k = sc.nextInt();
    sc.close();

    int answer = 0;
    k = k * 2 - 1;
    for (int i = 1; i <= k; i++) {
      if (i % 2 == 1) {
        int d = 2 * i - 2;
        answer += (w - d + h - d - 2) * 2;
      }
    }

    System.out.println(answer);

  }

}