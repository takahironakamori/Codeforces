import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    if (n < 11) {
      System.out.println(0);
    } else if (n < 20) {
      System.out.println(4);
    } else if (n < 21) {
      System.out.println(15);
    } else if (n < 22) {
      System.out.println(4);
    } else {
      System.out.println(0);
    }

  }

}