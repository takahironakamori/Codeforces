import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);

    int[] a = new int[4];
    for (int i = 0; i < 4; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    Arrays.sort(a);

    if (a[3] == a[2] + a[1] + a[0]) {
      System.out.println("YES");
    } else if(a[3] + a[2] == a[1] + a[0]) {
      System.out.println("YES");
    } else if(a[3] + a[1] == a[2] + a[0]) {
      System.out.println("YES");
    } else if(a[3] + a[0] == a[2] + a[1]) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }
    
  }

}