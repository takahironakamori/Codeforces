import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int l = sc.nextInt();
    int r = sc.nextInt();
    int a = sc.nextInt();

    sc.close();

    int answer = 0;

    for (int i = 0; i <= a; i++){
      for (int j = 0; j <= a; j++) {
        if (i + j <= a) {
          int l2 = l + i;
          int r2 = r + j;
          if (l2 == r2) {
            answer = Math.max(answer, l2 + r2);
          } else {
            int d = Math.abs(l2 - r2);
            answer = Math.max(answer, l2 + r2 - d);
          }
        }
      }
    }
    
    System.out.println(answer);
  
  }

}