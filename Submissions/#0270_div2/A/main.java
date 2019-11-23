import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int x = 0;
    int y = 0;

    if (n % 2 == 0) {
      x = n - 8;
      y = n - x;
    } else {
      x = n - 9;
      y = n - x;
    }

    System.out.println(x + " " + y);

  }

}