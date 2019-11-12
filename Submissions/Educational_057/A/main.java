import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {
      int l = sc.nextInt();
      int r = sc.nextInt();
      int d = r / l;
      System.out.println(l + " " + d * l);
    }

    sc.close();
    
  }

}