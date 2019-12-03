import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String s = sc.next();
    sc.close();

    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        String s_ = s.substring(0, i);
        StringBuffer sb = new StringBuffer(s_);
        String R = sb.reverse().toString();
        s = R + s.substring(i);
      }
    }
    
    System.out.println(s);
  
  }

}