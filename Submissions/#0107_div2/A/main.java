import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    int l = sc.nextInt();
    int c = sc.nextInt();
    int d = sc.nextInt();
    int p = sc.nextInt();
    int nl = sc.nextInt();
    int np = sc.nextInt();
    sc.close();

    int answer = k * l / nl;
    answer = Math.min(answer, c * d);
    answer = Math.min(answer, p / np);

    System.out.println(answer / n);

  }

}