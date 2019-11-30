import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    long A = sc.nextLong();
    long B = sc.nextLong();
    long yellow = sc.nextLong();
    long green = sc.nextLong();
    long blue = sc.nextLong();
    sc.close();

    long yellowcystals = yellow * 2 + green;
    long bluecystals = blue * 3 + green;

    long answer = 0;

    if (0 < yellowcystals - A) {
      answer = yellowcystals - A;
    }
    
    if (0 < bluecystals - B) {
      answer += bluecystals - B;
    }
        
    System.out.println(answer);
  
  }

}