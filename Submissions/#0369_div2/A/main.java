import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    String[][] v = new String[n][5];
    String answer = "NO";
    for (int i = 0; i < n; i++) {
      String V = sc.next();
      v[i] = V.split("");
      if (answer.equals("NO")) {
        if (v[i][0].equals("O") && v[i][1].equals("O")) {
          answer = "YES";
          v[i][0] = "+";
          v[i][1] = "+";
        } else if (v[i][3].equals("O") && v[i][4].equals("O")){
          answer = "YES";
          v[i][3] = "+";
          v[i][4] = "+";
        }
      }
    }
    
    sc.close();

    System.out.println(answer);
    if (answer.equals("YES")) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
          System.out.print(v[i][j]);
        }
        System.out.println("");
      }
    }

  }

}