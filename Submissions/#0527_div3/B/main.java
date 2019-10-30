import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    sc.close();

    Arrays.sort(a);

    int answer = 0;
    for (int i = 0; i < n - 1; i += 2) {
      answer += a[i+1] - a[i];
    }
    
    System.out.println(answer);
  
  }

}