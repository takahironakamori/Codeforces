import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();

    int[] answer = new int[n];

    for (int i = 0; i < a; i++) {
      int v = sc.nextInt();
      answer[v - 1] = 1;
    }

    for (int i = 0; i < b; i++) {
      int v = sc.nextInt();
      answer[v - 1] = 2;
    }

    sc.close();

    for (int i = 0; i < n; i++) {
      System.out.print(answer[i] + " ");
    }

    System.out.println("");

  }

}