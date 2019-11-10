import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String A = sc.next();
    sc.close();

    String[] a = A.split("");

    for (int i = 0; i < a.length; i++) {
      System.out.print(a[i]);
    }

    for (int i = a.length - 1; 0 <= i; i--) {
      System.out.print(a[i]);
    }

    System.out.println("");

  }

}