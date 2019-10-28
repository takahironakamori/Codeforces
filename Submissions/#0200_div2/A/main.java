import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] m = new int[n];
    for (int i = 0; i < n; i++) {
      m[i] = sc.nextInt();
    }
    sc.close();
  
    int answer = 1;
    for (int i = 0; i < n - 1; i++) {
      if (m[i] != m[i+1]) {
        answer++;
      }
    }

    System.out.println(answer);

  }

}