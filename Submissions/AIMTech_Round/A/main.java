import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    double d = sc.nextDouble();
    double L = sc.nextDouble();
    double v1 = sc.nextDouble();
    double v2 = sc.nextDouble();
    sc.close();

    System.out.println((L - d) / (v1 + v2));

  }

}