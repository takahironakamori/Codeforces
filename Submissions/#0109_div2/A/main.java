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

    int maxV = a[0];
    int minV = a[0];
    int answer = 0;

    for (int i = 1; i < n; i++) {
      if (maxV < a[i]) {
        maxV = a[i];
        answer++;
      }
      if (a[i] < minV) {
        minV = a[i];
        answer++;
      }
    }

    System.out.println(answer);

  }

}