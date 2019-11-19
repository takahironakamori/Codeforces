import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int l = sc.nextInt();
    int m = sc.nextInt();
    int n = sc.nextInt();
    int d = sc.nextInt();
    sc.close();

    int answer = 0;
    
    for (int i = 1; i <= d; i++) {
      if (i % k == 0) {
        answer++;
      } else if (i % l == 0) {
        answer++;
      } else if (i % m == 0) {
        answer++;
      } else if (i % n == 0) {
        answer++;
      }
    }

    System.out.println(answer);

  }

}