import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    
    int nO = 0;
    int nE = 0;
    int mO = 0;
    int mE = 0;

    for (int i = 0; i < n; i++) {
      int v = sc.nextInt();
      if (v % 2 == 1) {
        nO++;
      } else {
        nE++;
      }
    }

    for (int i = 0; i < m; i++) {
      int v = sc.nextInt();
      if (v % 2 == 1) {
        mO++;
      } else {
        mE++;
      }
    }

    sc.close();

    int answer = Math.min(nO, mE) + Math.min(nE, mO);

    System.out.println(answer);
  }

}