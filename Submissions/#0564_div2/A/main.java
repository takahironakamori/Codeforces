import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int y = sc.nextInt();
    int z = sc.nextInt();

    sc.close();

    if (x == y) {
      if (0 < z) {
        System.out.println("?");
      } else {
        System.out.println(0);
      }
    } else if (y < x) {  
      if (x - y <= z) {
        System.out.println("?");
      } else {
        System.out.println("+");
      }
    } else {
      if (y - x <= z) {
        System.out.println("?");
      } else {
        System.out.println("-");
      }
    }

  }

}