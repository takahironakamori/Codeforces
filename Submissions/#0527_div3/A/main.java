import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {
      int n = sc.nextInt();
      int k = sc.nextInt();
      int current = 0;
      for (int j = 0; j < n; j++) {
        System.out.print(Character.toChars((97 + current)));
        if (k - 1 == current) {
          current = 0;
        } else {
          current++;
        }
      }
      System.out.println("");
    }

    sc.close();
    
  }

}