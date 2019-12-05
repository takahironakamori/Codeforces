import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    long n = sc.nextLong();
    long x = sc.nextLong();
    long y = sc.nextLong();
    sc.close();

    String answer = "White";
    
    long w = x + y - 2;
    long b = n * 2 - x - y;
  
    if (b < w) {
      answer = "Black";
    }
    
    System.out.println(answer);
  
  }

}