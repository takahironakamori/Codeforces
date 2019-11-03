import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    // [0]chest [1]biceps [2]back
    int[] e = new int[3];

    for (int i = 0; i < n; i++) {
      e[i % 3] += a[i];
    }

    if (e[0] < e[1]) {
      if (e[1] < e[2]) {
        System.out.println("back");
      } else {
        System.out.println("biceps");
      }
    } else {
      if (e[0] < e[2]) {
        System.out.println("back");
      } else {
        System.out.println("chest");
      }
    }

  }

}