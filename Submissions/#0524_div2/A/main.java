import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    sc.close();

    int red = n * 2;
    int green = n * 5;
    int blue = n * 8;
    int answer = 0;

    answer += Math.ceil((double) red / k);
    answer += Math.ceil((double) green / k);
    answer += Math.ceil((double) blue / k);

    System.out.println(answer);

  }

}