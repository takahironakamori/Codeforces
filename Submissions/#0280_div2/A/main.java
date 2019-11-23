import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int answer = 1;
    int v = 1;
    
    while (0 < n) {
      n -= v;
      v = (answer + 1) * (answer + 2) / 2;
      if (v <= n) {
        answer++;
      } else {
        n = 0;
      }
    }

    System.out.println(answer);

  }

}