import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] v = new int[101];
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      v[a]++;
    }
    sc.close(); 

    int answer = 0;
    for (int i = 1; i <= 100; i++) {
      answer = Math.max(answer, v[i]);
    }

    System.out.println(answer);
    
  }

}