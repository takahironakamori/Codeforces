import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    
    int[] b = new int[n + 1];
    for (int i = 0; i < m; i++) {
      int k = sc.nextInt();
      for (int j = k; j < n + 1; j++) {
        if (b[j] == 0) {
          b[j] = k;
        }
      }
    }
    sc.close();

    for (int i = 1; i < n + 1; i++) {
      System.out.print(b[i] + " ");
    }

    System.out.println("");

  }

}