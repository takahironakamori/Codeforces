import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int x1 = sc.nextInt();
    int x2 = sc.nextInt();
    int x3 = sc.nextInt();
    
    int max = Math.max(x1, x2);
    int min = Math.min(x1, x2);

    max = Math.max(max, x3);
    min = Math.min(min, x3);

    System.out.println(max - min);

  }

}