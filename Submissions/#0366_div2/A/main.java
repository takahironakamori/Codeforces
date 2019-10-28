import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    String hate = "I hate ";
    String love = "I love ";
    String answer = "";

    for (int i = 0; i < n; i++) {

      if (i % 2 == 0) {
        answer += hate;
      } else {
        answer += love;
      }

      if (i == n - 1) {
        answer += "it";
      } else {
        answer += "that ";
      }

    }

    System.out.println(answer);

  }

}