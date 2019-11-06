import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int s = sc.nextInt();
    sc.close();

    int c = s / 2;

    for (int i = 0; i < s; i++) {
      for (int j = 0; j < s; j++) {
        int d = c - Math.abs(i - c);
        if (Math.abs(j - c) <= d) {
          System.out.print("D");
        } else {
          System.out.print("*");
        }
      }
      System.out.println("");
    }

  }

}