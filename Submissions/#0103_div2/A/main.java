import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    int maxV = 0;
    int maxC = 0;
    int minV = 999;
    int minC = 0;

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (maxV < a) {
        maxV = a;
        maxC = i + 1;
      }
      if (a <= minV) {
        minV = a;
        minC = i + 1;
      }
    }

    sc.close();

    if (minC < maxC) {
      System.out.println(maxC - 2 + n - minC);
    } else {
      System.out.println(maxC - 1 + n - minC);
    }

  }

}