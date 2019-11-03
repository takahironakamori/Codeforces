import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    double M = sc.nextDouble();
    double N = sc.nextDouble();
    sc.close();

    System.out.println((int) Math.floor(M * N / 2));

  }

}