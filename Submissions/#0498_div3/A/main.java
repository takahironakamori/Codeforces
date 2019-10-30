import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (a % 2 == 0) {
        System.out.print(a - 1 + " ");
      } else {
        System.out.print(a + " ");
      }
    }

    System.out.println("");
    
    sc.close();
  
  }

}