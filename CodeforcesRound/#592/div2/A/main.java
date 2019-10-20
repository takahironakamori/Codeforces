import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    int[][] cases = new int[t][5];
    for (int i = 0; i < t; i++) {
      cases[i][0] = sc.nextInt();
      cases[i][1] = sc.nextInt();
      cases[i][2] = sc.nextInt();
      cases[i][3] = sc.nextInt();
      cases[i][4] = sc.nextInt();
    } 
    sc.close();

    String[] answer = new String[t];

    for (int i = 0; i < t; i++) {
    int x = (int) Math.ceil((double) cases[i][0] / cases[i][2]);
    int y = (int) Math.ceil((double) cases[i][1] / cases[i][3]);
    if (x + y <= cases[i][4]){
      answer[i] = String.valueOf(x) + " " + String.valueOf(y);
    } else {
      answer[i] = "-1";
    }
  }

    for (int i = 0; i < t; i++) {
      System.out.println(answer[i]);
    }

  }

}