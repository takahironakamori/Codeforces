import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {
      int b = sc.nextInt();
      int p = sc.nextInt();
      int f = sc.nextInt();
      int h = sc.nextInt();
      int c = sc.nextInt();
      
      int answer = 0;

      if (c <= h) {
        if (p * 2 <= b) {
          b -= p * 2;
          answer += p * h;
        } else {
          answer += (b / 2) * h;
          b = 0;
        }
        if (f * 2 <= b) {
          answer += f * c;
        } else {
          answer += (b / 2) * c;
        }
      } else {
        if (f * 2 <= b) {
          b -= f * 2;
          answer += f * c;
        } else {
          answer += (b / 2) * c;
          b = 0;
        }
        if (p * 2 <= b) {
          answer += p * h;
        } else {
          answer += (b / 2) * h;
        }
      }

      System.out.println(answer);
    }

    sc.close();
  }

}