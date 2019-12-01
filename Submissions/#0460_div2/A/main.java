import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();

    double answer = 100000000;

    for (int i = 0; i < n; i++) {
      double a = sc.nextDouble();
      double b = sc.nextDouble();
      answer = Math.min(answer, a * m / b);
    }

    sc.close();

    System.out.println(answer);
  
  }

}