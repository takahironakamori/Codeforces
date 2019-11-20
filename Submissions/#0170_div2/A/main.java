import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] d = new int[n];
    for (int i = 0; i < n; i++) {
      d[i] = sc.nextInt();
    }
    int s = sc.nextInt();
    int t = sc.nextInt();
    sc.close();

    int answer = 0;
    int d1 = 0;
    int d2 = 0;
    
    if (t < s) {
      for (int i = s - 1; i < n; i++) {
        d1 += d[i];
      }
      for (int i = 0; i < t - 1; i++) {
        d1 += d[i];
      }
      for (int i = t - 1; i < s - 1; i++) {
        d2 += d[i];
      }
      answer = Math.min(d1, d2);
    } else if (s == t) {
      answer = 0;
    } else {
      for (int i = s - 1; i < t - 1; i++) {
        d1 += d[i];
      }
      for (int i = t - 1; i < n; i++) {
        d2 += d[i];
      }
      for (int i = 0; i < s - 1; i++) {
        d2 += d[i];
      }
      answer = Math.min(d1, d2);
    }

    System.out.println(answer);

  }

}