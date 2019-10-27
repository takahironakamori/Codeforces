import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String T = sc.next();

    String [] t = T.split("");

    String answer = "NO";

    for (int i = 0; i < 5; i++) {
      String Card = sc.next();
      String [] card = Card.split("");
      if (t[0].equals(card[0]) || t[1].equals(card[1])) {
        answer = "YES";
        break;
      }
    }

    sc.close();

    System.out.println(answer);

  }

}