import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    String answer = "NO";

    int i = 1;
    int sum = i;
    
    while (sum <= n) {
      if (sum == n) {
        answer = "YES";
        sum = n + 1;
      } else {
        i++;
        sum += i;
      }
    }

    System.out.println(answer);

  }

}