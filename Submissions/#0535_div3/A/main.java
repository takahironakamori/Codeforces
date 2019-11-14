import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    
    for (int i = 0; i < t; i++) {

      int l1 = sc.nextInt();
      int r1 = sc.nextInt();
      int l2 = sc.nextInt();
      int r2 = sc.nextInt();
      
      int[] a = {l1, r1, l2, r2};

      int answer1 = 0;
      int answer2 = 0;

      for (int j = 0; j < a.length; j++) {
        for (int k = 0; k < a.length; k++) {
          if (l1 <= a[j] && a[j] <= r1 && l2 <= a[k] && a[k] <= r2 && a[j] != a[k]) {
            answer1 = a[j];
            answer2 = a[k];
          }
        }
      } 

      System.out.println(answer1 + " " + answer2);

    }

    sc.close();
    
  }

}