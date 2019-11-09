import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long A = sc.nextLong();
    long B = sc.nextLong();
    sc.close();

    long answer = 1;

    for (int i = 1; i <= Math.min(A, B); i++) {
      answer *= i;
    }

    System.out.println(answer);

  }

}