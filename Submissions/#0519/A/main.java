import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int mx = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      mx = Math.max(mx, a);
      sum += a;
    }
    sc.close();

    int current = mx;
    boolean flg = true;
    while (flg) {
      if (sum < n * current - sum) {
        System.out.println(current);
        flg = false;
      }
      current++;
    }
    
  }

}