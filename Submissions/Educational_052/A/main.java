import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {

      long s = sc.nextLong();
      long a = sc.nextLong();
      long b = sc.nextLong();
      long c = sc.nextLong();
       
      long answer = s / c;
      answer += answer / a * b;
  
      System.out.println(answer);
  
    }
    
    sc.close();
    
  }

}