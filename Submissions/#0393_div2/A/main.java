import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int m = sc.nextInt();
    int d = sc.nextInt();
    sc.close();

    int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    double days_ = days[m - 1] + d - 1;

    System.out.println((int) Math.ceil(days_ / 7));

  }

}