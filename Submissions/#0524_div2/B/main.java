import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long q = sc.nextLong();

    for (int i = 0; i < q; i++) {
      
      long l = sc.nextLong();
      long r = sc.nextLong();

      long answer = 0;

      if (l % 2 == 1) {
        answer = (r - l) / 2;
      } else {
        answer = (r - l + 1) / 2;
      }

      answer = 0 - answer;
  
      if (l % 2 == 1) {
        answer -= l;
      }
  
      if (r % 2 == 0) {
        answer += r;
      }

      System.out.println(answer);

    }
    
    sc.close();
  
  }

}