import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    int n = sc.nextInt();

    int answer = 0;

    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      if (b < x && x < c) {
        answer++;
      }
    }

    sc.close();

    System.out.println(answer);

  }

}