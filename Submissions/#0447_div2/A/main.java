import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String N = sc.next();
    sc.close();

    char[] n = N.toCharArray();

    int answer = 0;
    int count = n.length;

    for (int i = 0; i < count; i++) {
      for (int j = i; j < count; j++) {
        for (int k = j; k < count; k++) {
          if (n[i] == 'Q' && n[j] == 'A' && n[k] == 'Q') {
            answer++;
          }
        }
      }
    }

    System.out.println(answer);

  }

}