import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    long current = 0;
    long old = 0;

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      current += a;
      System.out.print(current / m - old);
      System.out.print(" ");
      old = current / m;
    }

    sc.close();

    System.out.println("");
  
  }

}