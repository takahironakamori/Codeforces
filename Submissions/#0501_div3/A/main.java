import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int[] s = new int[m];
    for (int i = 0; i < n; i++) {
      int l = sc.nextInt();
      int r = sc.nextInt();
      for (int j = l; j <= r; j++) {
        s[j - 1]++;
      }
    }
    sc.close();

    int count = 0;
    for (int i = 0; i < m; i++) {
      if (s[i] == 0 ) {
        count++;
      }
    }

    System.out.println(count);

    for (int i = 0; i < m; i++) {
      if (s[i] == 0 ) {
        System.out.print(i + 1);
        System.out.print(" ");
      }
    }

    System.out.println("");
  
  }

}