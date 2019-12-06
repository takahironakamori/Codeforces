import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String T = sc.next();
    sc.close();

    String[] t = T.split("");

    String answer = "";

    int count1 = 0;
    int count2 = 0;

    for (int i = 1; i <= t.length; i++) {
      if (t.length % 2 == 0) {
        if (i % 2 == 1){
          answer += t[t.length - 1 - count1];
          count1++;
        } else {
          answer += t[count2];
          count2++;
        }
      } else {
        if (i % 2 == 1){
          answer += t[count1];
          count1++;
        } else {
          answer += t[t.length - 1 - count2];
          count2++;
        }
      }
    }

    StringBuffer sb = new StringBuffer(answer);

    String R = sb.reverse().toString();

    System.out.println(R);
  
  }

}