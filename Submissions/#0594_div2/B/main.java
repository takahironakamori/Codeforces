import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    long[] d = new long[n];
    long count = 0;

    for (int i = 0; i < n; i++) {
      d[i] = sc.nextLong();
      count += d[i];
    }

    sc.close();

    Arrays.sort(d);

    long count2 = 0;

    for (int i = 0; i < n / 2; i++) {
      count2 += d[i];
    }

    System.out.println(count2 * count2 + (count - count2) * (count - count2));
    
  }

}