import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int d = sc.nextInt();
    
    int answer = 0;
    int win = 0;

    for (int i = 0; i < d; i++) {
      String O = sc.next(); 
      String[] o = O.split("");
      int[] count = new int[2];
      for (int j = 0; j < o.length; j++) {
        if (o[j].equals("0")) {
          count[0]++;
        } else {
          count[1]++;
        }
      }
      if (count[1] != n) {
        win++;
      } else {
        answer = Math.max(answer, win);
        win = 0;
      }
    }
    sc.close();

    answer = Math.max(answer, win);
    
    System.out.println(answer);

  }

}