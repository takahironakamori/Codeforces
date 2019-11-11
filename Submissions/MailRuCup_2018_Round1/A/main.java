import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int y = sc.nextInt();
    int z = sc.nextInt();
    int t1 = sc.nextInt();
    int t2 = sc.nextInt();
    int t3 = sc.nextInt();
    sc.close();

    String answer = "YES";

    int d1 = Math.abs(x - y);
    int d2 = Math.abs(x - y) + Math.abs(x - z);

    if (d1 * t1 < d2 * t2 + t3 * 3) {
      answer = "NO";
    }

    System.out.println(answer);
    
  }

}