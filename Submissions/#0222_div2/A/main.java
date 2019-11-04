import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    sc.close();

    int first = 0;
    int second = 0;
    int draw = 0;

    for (int i = 1; i <= 6; i++) {
      if (Math.abs(a - i) == Math.abs(b - i)) {
        draw++;
      } else if (Math.abs(a - i) < Math.abs(b - i)) {
        first++;
      } else {
        second++;
      }
    }

    System.out.println(first + " " + draw + " " + second);

  }

}