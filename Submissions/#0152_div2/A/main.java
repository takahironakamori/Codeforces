import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] left = new int[2];
    int[] right = new int[2];

    for (int i = 0; i < n; i++) {
      int l = sc.nextInt();
      int r = sc.nextInt();
      left[l]++;
      right[r]++;
    }
    sc.close();

    System.out.println(Math.min(left[0],left[1]) + Math.min(right[0],right[1]));

  }

}