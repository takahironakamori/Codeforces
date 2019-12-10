import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] a = new int[n];
    long sum = 0;

    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
      sum += a[i]; 
    }

    Arrays.sort(a);

    int m = sc.nextInt();

    PrintWriter out = new PrintWriter(System.out);
    
    for (int i = 0; i < m; i++) {
      int q = sc.nextInt();
      out.println(sum - a[n - q]);
    }

    out.flush();
    
    sc.close();
  
  }

}