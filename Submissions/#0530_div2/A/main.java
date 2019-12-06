import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int w = sc.nextInt();
    int h = sc.nextInt();
    int u1 = sc.nextInt();
    int d1 = sc.nextInt();
    int u2 = sc.nextInt();
    int d2 = sc.nextInt();
    sc.close();

    for (int i = h; 0 < i; i--) { 
      w += i;
      if (i == d1) {
        w -= u1;
      }
      if (i == d2) {
        w -= u2;
      }
      if (w < 0) {
        w = 0;
      }
    }

    System.out.println(w);
  
  }

}