import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();
    
    int[] h = new int[n];
    for (int i = 0; i < n; i++) {
      h[i] = sc.nextInt();
    }
    sc.close();

    Arrays.sort(h);

    System.out.println(h[b] - h[b - 1]);

  }

}