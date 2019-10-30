import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] s = new int[n];
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();
      int d = sc.nextInt();
      s[i] = a + b + c + d;
    }
    sc.close();

    int count = 0;
    for (int i = 1; i < n; i++) {
      if (s[0] < s[i]) {
        count++;
      }
    }

    System.out.println(count+1);
  
  }

}