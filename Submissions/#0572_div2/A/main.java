import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String K = sc.next();
    sc.close();

    String[] k = K.split("");

    int count = 0;

    for (int i = 0; i < n; i++) {
      if (k[i].equals("0")) {
        count++;
      } else {
        count--;
      }
    }

    if (count == 0) {
      System.out.println(2);
      System.out.println(K.substring(0, n - 1) + " " + K.substring(n - 1));
    } else {
      System.out.println(1);
      System.out.println(K);
    }
    
  }

}