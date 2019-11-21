import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    
    int answer = 0;
    
    for (int i = 0; i < n; i++) {
      String s = sc.next();
      if (s.equals("++X") || s.equals("X++")) {
        answer++;
      } else {
        answer--;
      }
    }
    sc.close();

    System.out.println(answer);

  }

}