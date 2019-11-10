import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    long k = sc.nextLong();
    sc.close();

    long allTurn = n / k;

    if (allTurn % 2 == 1) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}