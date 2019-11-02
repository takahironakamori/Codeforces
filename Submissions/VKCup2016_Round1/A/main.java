import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int c = sc.nextInt();

    int[] p = new int[n];
    for (int i = 0; i < n; i++) {
      p[i] = sc.nextInt();
    }

    int[] t = new int[n];
    for (int i = 0; i < n; i++) {
      t[i] = sc.nextInt();
    }

    sc.close();

    int time = 0;
    int L = 0;
    int R = 0;

    for (int i = 0; i < n; i++) {
      time += t[i];
      L += Math.max(0, p[i] - c * time);
    }

    time = 0;
    for (int i = n - 1; 0 <= i; i--) {
      time += t[i];
      R += Math.max(0, p[i] - c * time);
    }

    if (R == L) {
      System.out.println("Tie");
    } else if (R < L) {
      System.out.println("Limak");
    } else {
      System.out.println("Radewoosh");
    }

  }

}