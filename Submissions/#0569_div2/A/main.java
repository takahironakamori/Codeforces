import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int answer = 0;
  
    int w = n * 2 - 1;

    n = n - 1;

    for (int i = 0; i < w; i++) {
      for (int j = 0; j < w; j++) {
        int d = n - Math.abs(i - n);
        if (Math.abs(j - n) <= d) {
          answer++;
        }
      }
    }

    System.out.println(answer);
    
  }

}