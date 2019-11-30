import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();

    int[] num = new int[10];
    
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
      num[a[i]]++;
    }
    Arrays.sort(a);
    
    int[] b = new int[m];
    for (int i = 0; i < m; i++) {
      b[i] = sc.nextInt();
      num[b[i]]++;
    }
    Arrays.sort(b);
    
    sc.close();

    for (int i = 1; i < 10; i++) {
      if (num[i] == 2) {
        System.out.println(i);
        return;
      }
    }

    if (a[0] < b[0]) {
      System.out.println(a[0] * 10 + b[0]);
    } else {
      System.out.println(b[0] * 10 + a[0]);
    }

  }

}