import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] t = new int[n + 2];
    for (int i = 1; i <= n; i++) {
      t[i] = sc.nextInt();
    }
    sc.close();

    t[n + 1] = 91;

    for (int i = 1; i <= n + 1; i++) {
      if (t[i - 1] + 15 < t[i]) {
        System.out.println(t[i - 1] + 15);
        return;
      }
    }

    System.out.println(90);

  }

}