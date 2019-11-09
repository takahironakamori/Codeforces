import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int r = sc.nextInt();
    sc.close();

    int answer = 0;
    for (int i = 1; i < 10; i++) {
      answer = i;
      if ((k * i) % 10 == r || (k * i) % 10 == 0) {
        break;
      }
    }

    System.out.println(answer);

  }

}