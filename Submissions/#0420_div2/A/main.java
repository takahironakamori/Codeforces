import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    int[][] a = new int[n][n];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i][j] = sc.nextInt();
      }
    }
    
    sc.close();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        
        if (a[i][j] == 1) {
          continue;
        }
  
        boolean flg = false;
        
        for (int k = 0; k < n; k++){
          
          if (k == i) {
            continue;
          }
  
          for (int l = 0; l < n; l++){
            if (l == j) {
              continue;
            }
  
            if (a[i][j] == a[i][l] + a[k][j]) {
              flg = true;
              break;
            }
  
          }
  
          if (flg) {
            break;
          }
  
        }
  
        if (!flg) {
          System.out.println("No");
          return;
        }
  
      }
    }

    System.out.println("Yes");

  }

}