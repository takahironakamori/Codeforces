import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int c = sc.nextInt();
    
    int before = 0;
    int answer = 0;

    for (int i = 0; i < n; i++) {
      int v = sc.nextInt();
      if (v - before <= c) {
        answer++;
      } else {
        answer = 1;
      }
      before = v;
    }
    sc.close();

    System.out.println(answer);

  }

}