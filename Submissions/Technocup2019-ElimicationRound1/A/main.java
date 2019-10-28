import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {
    
      int v = sc.nextInt();
  
      int answer = 0;
  
      boolean repeat = true;
  
      while (repeat) {
        if (v % 2 == 0 && 4 <= v) {
          repeat = false;
        } else {
          v++;
          answer++;
        }
      }
  
      System.out.println(answer);
  
    }

    sc.close();

  }

}