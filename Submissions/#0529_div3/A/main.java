import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close(); 

    String[] s = S.split("");

    String answer = "";

    int count = 0;
    int i = 0;

    while (i < n) {
      answer += s[i];
      count++;
      i += count;
    }

    System.out.println(answer);
    
  }

}