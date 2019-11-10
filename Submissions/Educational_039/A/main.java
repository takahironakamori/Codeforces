import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int B = 0;
    int C = 0;

    for (int i = 0; i < n; i++) {
      int A = sc.nextInt();
      if (0 <= A) {
        B += A;
      } else {
        C += A;
      }
    }

    sc.close();

    System.out.println(B - C);

  }

}