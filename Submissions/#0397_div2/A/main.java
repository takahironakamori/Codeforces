import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String home = sc.next();

    int count = 0;  
  
    for (int i = 0; i < n; i++) {
      String s = sc.next();
      if (s.substring(0,3).equals(home)) {
        count++;
      }
      if (s.substring(5).equals(home)) {
        count--;
      }
    }

    sc.close();

    if (count == 0) {
      System.out.println("home");
    } else {
      System.out.println("contest");
    }

  }

}