import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    for (int i = 0; i < n; i++) {
      String s = sc.next();
      if (10 < s.length()) {
        System.out.println(s.substring(0,1) + (s.length() - 1) + s.substring(s.length() - 1));
      } else {
        System.out.println(s);
      }
    }

    sc.close();

  }

}