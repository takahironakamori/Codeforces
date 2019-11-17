import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    int[] num = new int[1001];

    int n = sc.nextInt();
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
      num[a[i]]++;
    }

    int m = sc.nextInt();
    int[] b = new int[m];
    for (int i = 0; i < m; i++) {
      b[i] = sc.nextInt();
      num[b[i]]++;
    }

    sc.close();

    boolean flg = false;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int c = a[i] + b[j];
        if (num[c] == 0) {
          System.out.println(a[i] + " " + b[j]);
          flg = true;
          break;
        }
      }
      if (flg) {
        break;
      }
    }
    
  }

}