import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    
    for (int i = 0; i < t; i++) {
      long a = sc.nextLong();
      long b = sc.nextLong();
      long k = sc.nextLong();

      long answer = 0;
      long c = k / 2;
      
      if (k % 2 == 0) {
        answer += a * c;
      } else {
        answer += a * (c + 1);
      }
      answer -= b * c;

      System.out.println(answer);
    }

    sc.close();    

  }

}