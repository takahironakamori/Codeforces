import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    while (0 < t) {
      long x = sc.nextLong();
      long y = sc.nextLong();
      if ((x - y) == 1) {
        System.out.println("NO"); 
      } else {
        System.out.println("YES"); 
      }
      t--;
    }

    sc.close();

  }

}