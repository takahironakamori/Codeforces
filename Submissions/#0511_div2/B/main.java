import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    long answer = 0;
    
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      int y = sc.nextInt();
      if (answer < x + y) {
        answer = x + y;
      }
    }
    
    sc.close();

    System.out.println(answer);
  
  }

}