import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    String A = "";

    int current = 1;

    while (A.length() < n) {
      A += String.valueOf(current);
      current++;
    }

    String[] a = A.split("");

    System.out.println(a[n - 1]);

  }

}