import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {
  
      int a = sc.nextInt();

      if (0 < a) {
        count1++;
      }

      if (a < 0) {
        count2++;
      }
  
    }
    
    sc.close();

    if (count2 <= count1) {

      if (Math.ceil((double)n / 2) <= count1) {
        System.out.println(1);
      } else {
        System.out.println(0);
      }
  
    } else {

      if (Math.ceil((double)n / 2) <= count2) {
        System.out.println(-1);
      } else {
        System.out.println(0);
      }

    }
  
  }

}