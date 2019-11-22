import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int x = sc.nextInt();
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int c = sc.nextInt();
      sum += c;
    }
    sc.close();

    sum = Math.abs(sum);

    System.out.println((int) Math.ceil((double)sum / x));

  }

}