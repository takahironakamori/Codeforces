import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    sc.close();

    long answer = 0;

    if (n == 1 || n == 2 ){
      answer = 1;
    } else {
      answer = n / 3 * 2;
      if (n % 3 != 0) {
        answer++;
      }
    }

    System.out.println(answer);

  }

}