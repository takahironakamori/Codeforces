import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String a = sc.next();
    String b = sc.next();
    sc.close();

    if (a.equals(b)) {
      System.out.println(a);
    } else {
      System.out.println(1);
    }

  }

}