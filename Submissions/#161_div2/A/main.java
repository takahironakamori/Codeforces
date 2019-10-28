import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        int v = sc.nextInt();
        if (v == 1) {
          System.out.println(Math.abs(j - 2) + Math.abs(i - 2));
        }
      }
    }
    
    sc.close();

  }

}