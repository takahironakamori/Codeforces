import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    
    int answer = 0;

    for (int i = 0; i < n; i++) {
      int b = sc.nextInt();
      if (k <= 5 - b) {
        answer++;
      }
    }
    sc.close();

    System.out.println(answer / 3);

  }

}