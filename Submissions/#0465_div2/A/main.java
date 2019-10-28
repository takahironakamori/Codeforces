import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int answer = 0;

    for (int i = 1; i < n; i++) {
      if ((n - i) % i == 0) {
        answer++;
      }
    }

    System.out.println(answer);

  }

}