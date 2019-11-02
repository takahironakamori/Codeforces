import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long a = sc.nextLong();
    long b = sc.nextLong();
    long c = sc.nextLong();
    sc.close();

    long answer = 0;

    answer += c * 2;

    if (1 < a - b) {
      System.out.println(answer + b + b + 1);
    } else if (1 < b - a) {
      System.out.println(answer + a + a + 1);
    } else {
      System.out.println(answer + a + b);
    }

  }

}