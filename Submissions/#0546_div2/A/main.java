import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] l = new int[n];
    int[] r = new int[n];

    for (int i = 0; i < n; i++) {
      l[i] = sc.nextInt();
      r[i] = sc.nextInt();
    }

    int k = sc.nextInt();

    sc.close();

    int count = 0;
    for (int i = 0; i < n; i++) {
      if (l[i] <= k && k <= r[i]){
        count = i;
      }
    }

    System.out.println(n - count);
  
  }

}