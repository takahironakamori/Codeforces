import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++) {
      
      int ping = sc.nextInt();
      
      int success;
      int lost;

      if (ping == 1) {
        success = sc.nextInt();
        lost = sc.nextInt();
        a += success - lost;
      } else {
        success = sc.nextInt();
        lost = sc.nextInt();
        b += success - lost;
      }
    }

    sc.close();

    if (0 <= a) {
      System.out.println("LIVE");
    } else {
      System.out.println("DEAD");
    }
  
    if (0 <= b) {
      System.out.println("LIVE");
    } else {
      System.out.println("DEAD");
    }

  }

}