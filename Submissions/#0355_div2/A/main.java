import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int h = sc.nextInt();
    int answer = 0;
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (h < a) {
        answer += 2;
      } else {
        answer++;
      }
    }
    sc.close();
    
    System.out.println(answer);    

  }

}