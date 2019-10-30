import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int s = sc.nextInt();
    int v1 = sc.nextInt();
    int v2 = sc.nextInt();
    int t1 = sc.nextInt();
    int t2 = sc.nextInt();
    sc.close();

    int r1 = t1 * 2 + v1 * s;
    int r2 = t2 * 2 + v2 * s;

    if (r1 == r2) {
      System.out.println("Friendship");
    } else if (r1 < r2) {
      System.out.println("First");
    } else {
      System.out.println("Second");
    }
  
  }

}