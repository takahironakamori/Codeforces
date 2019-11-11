import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    sc.close();

    if (x == 1) {
      System.out.println(-1);
    } else {
      int answer = x - x % 2;
      System.out.println(answer + " " + 2);
    }
    
  }

}