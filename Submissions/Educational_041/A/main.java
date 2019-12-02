import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();
    
    int[] count = new int[n];
    for (int i = 0; i < m; i++) {
      int c = sc.nextInt();
      count[c - 1]++;
    }

    sc.close();

    int answer = m + 1;

    for (int i = 0; i < n; i++) {
      answer = Math.min(answer, count[i]);
    }
    
    System.out.println(answer);
  
  }

}