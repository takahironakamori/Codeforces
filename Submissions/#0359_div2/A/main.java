import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int x = sc.nextInt();
    
    long answer = x;
    int count = 0;

    for (int i = 0; i < n; i++) {
      String k = sc.next();
      int d = sc.nextInt();
      if (k.equals("+")) {
        answer += d;
      } else {
        if (d <= answer) {
           answer -= d;
        } else {
          count++;
        }
      } 
    }
    sc.close();

    System.out.println(answer + " " + count);

  }

}