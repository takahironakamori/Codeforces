import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    

    int answer = 0;

    for (int i = 0; i < n; i++) {
      int p = sc.nextInt();
      int q = sc.nextInt();
      if (2 <= q - p) {
        answer++;
      }
    }

    sc.close();

    System.out.println(answer);

  }

}