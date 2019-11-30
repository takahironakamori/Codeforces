import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += sc.nextInt();
    }

    int [] b = new int[n];
    for (int i = 0; i < n; i++) {
      b[i] = sc.nextInt();
    }
  
    sc.close();

    Arrays.sort(b);

    String answer = "YES";

    if (n != 2) {
      if ((b[n - 1] + b[n - 2]) < sum) {
        answer = "NO";
      }
    }

    System.out.println(answer);

  }

}