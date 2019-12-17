import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] x = new int[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
      x[i] = sc.nextInt();
      if (x[i] % 2 == 0) {
        count++;
      }
    }

    sc.close();

    System.out.println(Math.min(count, n - count));
    
  }

}