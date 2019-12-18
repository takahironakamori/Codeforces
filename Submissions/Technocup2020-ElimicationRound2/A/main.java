import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int d1 = sc.nextInt();
    int d2 = sc.nextInt();

    sc.close();

    if (d1 == d2) {
      System.out.print(d1 * 10);
      System.out.print(" ");
      System.out.println(d1 * 10 + 1);  
    } else if (d2 < d1 || 1 < Math.abs(d2 - d1)) {
      if (d1 == 9 && d2 == 1) {
        System.out.println(9 + " " + 10); 
      } else {
        System.out.println(-1); 
      } 
    } else {
      System.out.println(d1 + " " + d2);
    }

  }

}