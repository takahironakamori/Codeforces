import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int current = 1;

    for (int i = 1; i < n; i++) {
      current += i;
      if (n < current) {
        current = current - n;
      }
      System.out.print(current + " ");
    }
    
    System.out.println("");

  }

}