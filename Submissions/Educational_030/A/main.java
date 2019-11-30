import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int k = sc.nextInt();
    int x = sc.nextInt();
    
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
  
    sc.close();

    for (int i = 0; i < k; i++) {
      a[a.length - 1 - i] = x;
    }
  
    int answer = 0;
    for (int i = 0; i < n; i++) {
      answer += a[i];
    }

    System.out.println(answer);

  }

}