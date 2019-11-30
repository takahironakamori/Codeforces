import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      int y = sc.nextInt();
      if (0 < x) {
        count1++;
      } else {
        count2++;
      }
    }
  
    sc.close();

    if ((n - 1) <= count1 || (n - 1) <= count2) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }

  }

}