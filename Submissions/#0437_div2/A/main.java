import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String V = sc.next();
    sc.close();

    String[] v = V.split("");  

    if (v[0].equals("S") && v[n-1].equals("F")) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}