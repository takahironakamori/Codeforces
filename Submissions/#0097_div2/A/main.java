import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] v = new int[n];
    for (int i = 0; i < n; i++) {
      int p = sc.nextInt();
      v[p - 1] = i + 1;
    }
    sc.close();

    for (int i = 0; i < n; i++) {
      System.out.print(v[i] + " ");
    }

    System.out.println("");
  }

}