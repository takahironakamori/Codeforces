import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    String[] s = S.split(""); 

    Arrays.sort(s);

    for (int i = 0; i < n; i++) {
      if (s[i].equals("n")) {
        System.out.print("1" + " ");
      } else if (s[i].equals("z")) {
        System.out.print("0" + " ");
      }
    }

    System.out.println("");

  }

}