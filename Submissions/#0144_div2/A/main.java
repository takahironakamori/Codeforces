import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();
    
    if (n % 2 == 0){
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
          System.out.print((i + 1) + " ");
        } else {
          System.out.print((i - 1) + " ");
        }
      }
      System.out.println("");
    } else {
      System.out.println("-1");
    }

  }

}