import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int p = sc.nextInt();
    int n = sc.nextInt();
    
    int answer = -1;

    int[] h = new int[p];

    Arrays.fill(h, -1);

    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      if (h[x % p] == x % p) {
        if (answer == -1) {
          answer = i + 1;
        }
      } else {
        h[x % p] = x % p;
      }
    }
    sc.close();

    System.out.println(answer);

  }

}