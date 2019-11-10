import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++) {
      x += sc.nextInt();
    }

    for (int i = 0; i < n; i++) {
      y += sc.nextInt();
    }
    sc.close();

    if (y <= x) {
      System.out.println("YES");
    } else { 
      System.out.println("NO");
    }

  }

}