import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int answer = 0;

    while (0 < n) {
      if (100 <= n) {
        answer += n / 100;
        n = n % 100;  
      } else if (20 <= n) {
        answer += n / 20;
        n = n % 20;
      } else if (10 <= n) {
        answer += n / 10;
        n = n % 10;
      } else if (5 <= n) {
        answer += n / 5;
        n = n % 5;
      } else {
        answer += n;
        n = 0;
      }
      
    }

    System.out.println(answer);

  }

}