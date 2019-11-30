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

    String answer = "YES";

    // participate
    int p1 = 1;
    int p2 = 2;
    
    // spectating
    int s = 3;
  
    for (int i = 0; i < n; i++) {
      if (a[i] == s) {
        answer = "NO";
        break;
      } else {
        if (a[i] == p1) {
          int p2_ = p2;
          p2 = s;
          s = p2_;
        } else {
          int p1_ = p1;
          p1 = s;
          s = p1_;
        }
      }
    }

    System.out.println(answer);

  }

}