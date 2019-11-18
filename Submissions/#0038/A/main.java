import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] d = new int[n];
    for (int i = 0; i < n - 1; i++) {
      d[i] = sc.nextInt();
    }
    int a = sc.nextInt();
    int b = sc.nextInt();
    sc.close();

    int answer = 0;

    for (int i = a - 1; i < b - 1; i++) {
      answer += d[i];
    }

    System.out.println(answer);
    
  }

}