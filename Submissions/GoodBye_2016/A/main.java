import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    sc.close();

    int limit = 240 - k;

    int answer = 0;
    int t = 0;
    
    for(int i = 1; i <= n; i++) {
      t += 5 * i;
      if (limit < t) {
        break;
      }
      answer = i;
    }

    System.out.println(answer);

  }

}