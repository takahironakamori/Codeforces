import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
 
    int[] a = new int[n + 2];
    for (int i = 1; i < n + 1; i++) {
      a[i] = sc.nextInt();
    }
    
    int m = sc.nextInt();
    
    for (int i = 0; i < m; i++) {
      int x = sc.nextInt();
      int y = sc.nextInt();
      a[x - 1] += y - 1; 
      a[x + 1] += a[x] - y;
      a[x] = 0;
    }

    sc.close();

    for (int i = 1; i < n + 1; i++) {
      System.out.println(a[i]);
    }

  }

}