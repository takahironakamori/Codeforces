import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[][] ha = new int[n][2];
    for (int i = 0; i < n; i++) {
      ha[i][0] = sc.nextInt();
      ha[i][1] = sc.nextInt();
    }
    sc.close();

    int answer = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i != j && ha[i][0] == ha[j][1]) {
          answer++;
        }
      }
    }
    
    System.out.println(answer);

  }

}