import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int answer = 0;
    for (int i = 0; i < n; i++) {
      int p = sc.nextInt();
      int v = sc.nextInt();
      int t = sc.nextInt();
      if (1 < (p + v + t)){
        answer++;
      }
    }

    sc.close();

    System.out.println(answer);

  }

}