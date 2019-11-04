import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int answer = 0;
    int police = 0;

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (a == -1) {
        if (0 < police) {
          police--;
        } else {
          answer++;
        }
      } else {
        police += a;
      }
    }
    sc.close();

    System.out.println(answer);
    
  }

}