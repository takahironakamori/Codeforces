import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int l = 0;
    int r = 0;
    
    int[] d = new int[n];

    for (int i = 0; i < n; i++) {
      d[i] = sc.nextInt();
      if (d[i] == 0) {
        l++;
      } else {
        r++;
      }
    }

    sc.close();
  
    for (int i = 0; i < n; i++) {
      if (d[i] == 0) {
        l--;
        if (l == 0) {
          System.out.println(i + 1);
          break;
        }
      } else {
        r--;
        if (r == 0) {
          System.out.println(i + 1);
          break;
        }
      }
    }

  }

}