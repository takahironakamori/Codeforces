import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (a % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }

    sc.close();

    if (odd % 2 == 0) {
      System.out.println(even);
    } else {
      System.out.println(odd);
    }

  }

}