import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int[] n = new int[4];
    for (int i = 0; i < 4; i++) {
      n[i] = sc.nextInt();
    }
    sc.close();

    Arrays.sort(n);

    System.out.print(n[3] - n[2] + " ");
    System.out.print(n[3] - n[1] + " ");
    System.out.print(n[3] - n[0] + " ");
    System.out.println("");

  }

}