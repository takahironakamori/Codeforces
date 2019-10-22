import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int q = sc.nextInt();

    int[] sum = new int[q];
    for (int i = 0; i < q; i++) {
      int n = sc.nextInt();
      for (int j = 0; j < n; j++) {
        sum[i] += sc.nextInt();
      }
      System.out.println((int) Math.ceil((double) sum[i] / n));
    }
    
    sc.close();
  }

}