import java.util.*;

public class Main {

  public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
    String F = sc.next();
    String M = sc.next();
    String S = sc.next();
    sc.close();

    String answer = "?";

    if (F.equals("paper") && M.equals("rock") && S.equals("rock")) {
      answer = "F";
    }
    if (F.equals("rock") && M.equals("scissors") && S.equals("scissors")) {
      answer = "F";
    }
    if (F.equals("scissors") && M.equals("paper") && S.equals("paper")) {
      answer = "F";
    }

    if (M.equals("paper") && F.equals("rock") && S.equals("rock")) {
      answer = "M";
    }
    if (M.equals("rock") && F.equals("scissors") && S.equals("scissors")) {
      answer = "M";
    }
    if (M.equals("scissors") && F.equals("paper") && S.equals("paper")) {
      answer = "M";
    }

    if (S.equals("paper") && M.equals("rock") && F.equals("rock")) {
      answer = "S";
    }
    if (S.equals("rock") && M.equals("scissors") && F.equals("scissors")) {
      answer = "S";
    }
    if (S.equals("scissors") && M.equals("paper") && F.equals("paper")) {
      answer = "S";
    }
    
    System.out.println(answer);

  }

}