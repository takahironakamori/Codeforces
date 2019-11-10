import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    int[] c = new int[n];
    int[] a = new int[m];

    for (int i = 0; i < n; i++) {
      c[i] = sc.nextInt();
    }

    for (int i = 0; i < m; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    int answer = 0;
    int currentM = 0;
    int currentN = 0;

    while (currentN < n && currentM < m) {
      if (c[currentN] <= a[currentM]) {
        answer++;
        currentM++;
        currentN++;
      } else {
        currentN++;
      }
    }
    
    System.out.println(answer);

  }

}