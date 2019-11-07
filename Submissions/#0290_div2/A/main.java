import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    sc.close();

    for (int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if (i % 2 == 0) {
          System.out.print("#");
        } else {
          if ((i + 1) % 4 == 0 && j == 0) {
            System.out.print("#");
          } else if ((i + 1) % 4 != 0 && j == m - 1) {
            System.out.print("#");
          } else {
            System.out.print(".");
          }
        }
      }
      System.out.println("");
    }

  }

}