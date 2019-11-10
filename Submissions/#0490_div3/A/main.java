import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();

    int[] a = new int[n];

    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    int answer = 0;
    boolean stop = false;

    for (int i = 0; i < n; i++) {
      if (a[i] <= k) {
        answer++;
      } else {
        stop = true;
        break;
      }
    }

    if (stop) {
      for (int i = n - 1; 0 <= i; i--) {
        if (a[i] <= k) {
          answer++;
        } else {
          break;
        }
      }
    }
    
    System.out.println(answer);
    
  }

}