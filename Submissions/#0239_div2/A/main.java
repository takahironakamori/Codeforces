import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    int[] k = new int[n];
    for (int i = 0; i < n; i++) {
      k[i] = sc.nextInt();
    }

    int answer = 100000;
    for (int i = 0; i < n; i++) {
      int m = 0;
      for (int j = 0; j < k[i]; j++) {
        int v = sc.nextInt();
        m += v * 5 + 15;
      }
      answer = Math.min(answer, m);
    }
    sc.close();

    System.out.println(answer);

  }

}