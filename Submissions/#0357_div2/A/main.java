import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    String answer = "NO";

    for (int i = 0; i < n; i++) {
      String name = sc.next();
      int before = sc.nextInt();
      int after = sc.nextInt();
      if (2400 <= before && before < after) {
        answer = "YES";
      }
    }
    sc.close();

    System.out.println(answer);

  }

}