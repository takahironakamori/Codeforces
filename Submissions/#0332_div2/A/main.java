import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int d1 = sc.nextInt();
    int d2 = sc.nextInt();
    int d3 = sc.nextInt();
    sc.close();

    int answer = d1 + d2 + d3;

    answer = Math.min(answer, d1 + d1 + d2 + d2);

    answer = Math.min(answer, d1 + d1 + d3 + d3);

    answer = Math.min(answer, d2 + d2 + d3 + d3);

    System.out.println(answer);

  }

}