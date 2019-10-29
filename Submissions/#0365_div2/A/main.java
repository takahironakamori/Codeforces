import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      if (a != b) {
        if (a < b) {
          c++;
        } else {
          m++;
        }
      }
    }
    sc.close();

    if (m == c) {
      System.out.println("Friendship is magic!^^");
    } else if (c < m) {
      System.out.println("Mishka"); 
    } else {
      System.out.println("Chris");
    }

  }

}