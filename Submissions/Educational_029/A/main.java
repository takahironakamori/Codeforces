import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String X = sc.next();
    sc.close();

    char[] x = X.toCharArray();

    int count = 0;
    for (int i = x.length - 1; 0 <= i; i--) {
      if (x[i] == '0') {
        count++;
      } else {
        break;
      }
    }

    String x2 = X.substring(0, x.length - count);
    
    StringBuffer sb = new StringBuffer(x2);
    String x3 = sb.reverse().toString();
  
    if (x2.equals(x3)) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }

  }

}