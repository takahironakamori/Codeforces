import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    double l = sc.nextDouble();
    double p = sc.nextDouble();
    double q = sc.nextDouble();
    sc.close();
    
    System.out.println(l / (p + q) * p);

  }

}