import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int a = sc.nextInt();
    int b = sc.nextInt();
    
    sc.close();

    int count = 1;
    boolean flg = true;
    String answer = "";

    while (flg) {
      if (count % 2 == 1) {
        a -= count;
        if (a < 0) {
          answer = "Vladik";
          flg = false;
        }
      } else {
        b -= count;
        if (b < 0) {
          answer = "Valera";
          flg = false;
        }
      }
      count++;
    }

    System.out.println(answer);

  }

}