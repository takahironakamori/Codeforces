import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    sc.close();

    int count = 1;
    while (count <= m) {
      m -= count;
      count++;
      if (n < count) {
        count = 1;
      }
    }

    System.out.println(m);

  }

}