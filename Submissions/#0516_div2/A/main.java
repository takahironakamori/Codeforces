import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int[] abc = new int[3];
    abc[0] = sc.nextInt();
    abc[1] = sc.nextInt();
    abc[2] = sc.nextInt();
    sc.close();

    Arrays.sort(abc);

    if (abc[2] < abc[0]+abc[1]) {
      System.out.println(0);
    } else {
      System.out.println(abc[2] - abc[0] - abc[1] + 1);
    }

  }

}