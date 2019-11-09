import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    sc.close();

    int answer = 0;
    for (int i = 1; i <= 250; i++) {
      if (i <= a && (i * 2) <= b && (i * 4) <= c) {
        answer = i + i * 2 + i * 4;
      }
    }

    System.out.println(answer);

  }

}