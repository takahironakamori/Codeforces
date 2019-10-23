import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
  
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {

      int n = sc.nextInt();
      int[] p = new int[n];
      for (int j = 0; j < n; j++) {
        p[j] = sc.nextInt();
        p[j]--;
      }

      for (int j = 0; j < n; j++) {
        int count = 1;
        int k = p[j];
        while (k != j) {
          count++;
          k = p[k];
        }
        System.out.print(count + " ");
      }

      System.out.println("");

    }

    sc.close();

  }

}