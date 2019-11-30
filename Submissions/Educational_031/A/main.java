import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int t = sc.nextInt();

    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
  
    sc.close();

    int answer = 1;
    boolean flg = true;
    while (flg) {
      t = t - 86400 + a[answer - 1];
      if (t <= 0) {
        flg = false;
      } else {
        answer++;
      }
    }

    System.out.println(answer);

  }

}