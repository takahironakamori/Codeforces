import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    long minus = 0;
    long zero = 0;
    long answer = 0;

    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
      if (a[i] == 0) {
        zero++;
      } else if (a[i] < 0) {
        minus++;
        if (a[i] != -1) {
          answer += Math.abs(a[i] + 1);
        }
      } else {
        if (a[i] != 1) {
          answer += Math.abs(a[i] - 1);
        }
      }
    }
  
    if (minus % 2 == 1) {
      if (zero == 0) {
        answer += 2;
      }
    }
  
    answer += zero;

    sc.close();

    System.out.println(answer);

  }

}