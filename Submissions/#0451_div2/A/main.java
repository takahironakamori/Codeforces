import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int r = n % 10;

    if (r <= 5){
      System.out.println(n - r);
    } else {
      System.out.println(n + 10 - r);
    }

  }

}