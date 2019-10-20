import java.util.*;
 
public class Main {
 
  public static void main (String[] args) {
 
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[][] abc = new int[n][3];
    for (int i = 0; i < n; i++) {
      abc[i][0] = sc.nextInt();
      abc[i][1] = sc.nextInt();
      abc[i][2] = sc.nextInt();
    } 
    sc.close();
 
    int[] answer = new int[n];
 
    for (int i = 0; i < n; i++) {
      if ((abc[i][2] / 2) < abc[i][1]) {
        answer[i] += abc[i][2] / 2 * 3;
        abc[i][1] -= abc[i][2] / 2;
      } else {
        answer[i] += abc[i][1] * 3;
        abc[i][1]  = 0;
      }
      if ((abc[i][1] / 2) < abc[i][0]) {
        answer[i] += abc[i][1] / 2 * 3;
      } else {
        answer[i] += abc[i][0] * 3;
      }
    }
 
    for (int i = 0; i < n; i++) {
      System.out.println(answer[i]);
    }
 
  }
 
}