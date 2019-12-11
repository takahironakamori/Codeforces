import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    sc.close();

    while (sum(a) % 4 != 0) {
      a++;
    }

    System.out.println(a);

  }

  static int sum(int a) {
    
    int result = 0;

    while (a > 0) {
      result += a % 10;
      a /= 10;
    }

    return result;

  }

}