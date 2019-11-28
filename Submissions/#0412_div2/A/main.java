import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    int[] rate = new int[n];

    String answer = "maybe";

    for (int i = 0; i < n; i++) {

      int a = sc.nextInt();
      int b = sc.nextInt();
  
      if (a != b) {
        answer = "rated";
      } else {
        rate[i] = a;
      }
  
    }

    sc.close();
  
    if (answer == "maybe") {
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (rate[i] < rate[j]) {
            answer = "unrated";
            break;
          }
        }
      }
    }
    
    System.out.println(answer);

  }

}