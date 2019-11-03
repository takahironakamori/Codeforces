import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();

    int answer = 0;
    for (int i = 0; i < n; i++) {
      int count = 0;
      String A = sc.next();
      String[] a = A.split("");
      for (int j = 0; j < a.length; j++) {
        if (a[j].equals("4") || a[j].equals("7")) {
          count++;
        }
      }
      if (count <= k) {
        answer++;
      }
    }
    sc.close();

    System.out.println(answer);

  }

}