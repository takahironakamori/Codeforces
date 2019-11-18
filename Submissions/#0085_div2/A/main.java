import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    String a = sc.next();
    String b = sc.next();
    sc.close();

    String A = a.toUpperCase();
    String B = b.toUpperCase();

    if (A.compareTo(B) == 0) {
      System.out.println(0);
    } else if (A.compareTo(B) < 0) {
      System.out.println(-1);
    } else {
      System.out.println(1);
    }

  }

}