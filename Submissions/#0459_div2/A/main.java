import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    String[] answer = new String[n];

    for (int i = 0; i < n; i++) {
      answer[i] = "o";
    }

    int a, b;
    a = 1;
    b = 1;

    int tmp = 0;

    while (b <= n) {
      answer[b - 1] = "O";
      tmp = b;
      b = b + a;
      a = tmp;
    }

    for (int i = 0; i < n; i++) {
      System.out.print(answer[i]);
    }

    System.out.println("");

  }

}