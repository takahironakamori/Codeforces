import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int k = sc.nextInt();

    int answer = 1000;

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (k % a == 0) {
        answer = Math.min(answer, k / a);
      }
    }

    sc.close();
        
    System.out.println(answer);
  
  }

}