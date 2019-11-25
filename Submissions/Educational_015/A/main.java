import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    int answer = 0;

    int[] count = new int[n];
    count[0] = 1;
    for (int i = 1; i < n; i++) {
      if (a[i-1] < a[i]) {
        count[i] = count[i - 1] + 1;
      } else {
        answer = Math.max(answer, count[i - 1]);
        count[i] = 1;
      } 
    }
    answer = Math.max(answer, count[n - 1]);

    System.out.println(answer);

  }

}