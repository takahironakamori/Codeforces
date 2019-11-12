import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    String[][] M = new String[n][n]; 
    for (int i = 0; i < n; i++) {
      String m = sc.next();
      M[i] = m.split("");
    }

    sc.close();

    int answer = 0;

    for (int i = 1; i < n - 1; i++) {
      for (int j = 1; j < n - 1; j++) {
        if (M[i][j].equals("X") &&
            M[i - 1][j - 1].equals("X") && 
            M[i - 1][j + 1].equals("X") && 
            M[i + 1][j - 1].equals("X") && 
            M[i + 1][j + 1].equals("X")) {
          answer++;
        }
      }
    }

    System.out.println(answer);
    
  }

}