import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int y = sc.nextInt();
    int z = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    sc.close();

    String answer = "YES";

    if (a < x) {
      answer = "NO";
    }
  
    if ((a + b) - x < y) {
      answer = "NO";
    }
  
    if ((a + b + c - x - y) < z) {
      answer = "NO";
    }

    System.out.println(answer);
    
  }

}