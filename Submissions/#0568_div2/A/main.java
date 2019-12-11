import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int[] abc = new int[3];
    abc[0] = sc.nextInt();
    abc[1] = sc.nextInt();
    abc[2] = sc.nextInt();
    int d = sc.nextInt();
    sc.close();

    Arrays.sort(abc);

    int ab = abc[0] + d - abc[1];
    int bc = abc[0] + d * 2 - abc[2];

    if (Math.max(ab, bc) < 0) {
      System.out.println(0);
    } else {
      System.out.println(Math.max(ab, bc));
    }

  }


}