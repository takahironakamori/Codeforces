import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    double x = sc.nextDouble();
    sc.close();

    System.out.println((int) Math.ceil(x / 5));

  }

}