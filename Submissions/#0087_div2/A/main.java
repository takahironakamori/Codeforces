import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int answer = 0;
    int current = 0;

    for (int i = 0; i < n; i++) {
      int m = sc.nextInt();
      int p = sc.nextInt();
      current -= m;
      current += p;
      answer = Math.max(answer, current);
    }

    sc.close();

    System.out.println(answer);

  }

}