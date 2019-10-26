import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    String answer = "EASY";

    for (int i = 0; i < n; i++) {

      int a = sc.nextInt();

      if (a == 1){
        answer = "HARD";
      }

    }

    sc.close();

    System.out.println(answer);

  }

}