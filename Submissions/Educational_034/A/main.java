import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    for (int i = 0; i < n; i++) {
    
      int x = sc.nextInt();

      boolean flg = false;

      for (int j = 0; j < 100 / 3; j++) {
        for (int k = 0; k < 100 / 7; k++) {
          if ((3 * j) + (7 * k) == x) {
            flg = true;
          }
        }
        if (flg){
          break;
        }
      }
    
      if (flg) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }

    sc.close();
  
  }

}