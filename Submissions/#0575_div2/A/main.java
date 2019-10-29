import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int q = sc.nextInt();
    
    for (int i = 0; i < q; i++) {
      long a = sc.nextLong();
      long b = sc.nextLong();
      long c = sc.nextLong();
      System.out.println((a + b + c) / 2);
    }

    sc.close();    

  }

}