import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int count = sc.nextInt();
    String s1 = sc.next();
    String s2 = sc.next();
    sc.close();
    
    if (s2.equals("week")) {
      if (count == 5 || count == 6) {
        System.out.println(53);
      } else {
        System.out.println(52);
      }
    } else {
      if (count == 31) {
        System.out.println(7);
      } else if (count == 30) {
        System.out.println(11); 
      } else {
        System.out.println(12); 
      }
    }

  }

}