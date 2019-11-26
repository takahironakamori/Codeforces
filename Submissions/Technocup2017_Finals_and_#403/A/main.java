import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    boolean[] pair = new boolean[n+1];
    int answer = 0;
    int count = 0;

    for (int i = 0; i < n * 2; i++) {
      int x = sc.nextInt();
      if (pair[x] == false) {
        pair[x] = true;
        count++;
        answer = Math.max(answer, count);
      } else {
        pair[x] = false;
        count--;
      }
    }

    sc.close();

    System.out.println(answer);

  }

}