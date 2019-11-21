import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int r = sc.nextInt();
    int c = sc.nextInt();

    String[][] a = new String[r][c];
    for (int i = 0; i < r; i++) {
      String A = sc.next();
      a[i] = A.split("");
    }
    
    sc.close();

    int answer = 0;
    int countR = 0;
    int countC = 0;

    for (int i = 0; i < r; i++) {
      boolean flg = true;
      for (int j = 0; j < c; j++) {
        if (a[i][j].equals("S")) {
          flg = false;
          break;
        }
      }
      if (flg) {
        countR++;
        answer += c;
      }
    }
    
    for (int i = 0; i < c; i++) {
      boolean flg = true;
      for (int j = 0; j < r; j++) {
        if (a[j][i].equals("S")) {
          flg = false;
          break;
        }
      }
      if (flg) {
        countC++;
        answer += r;
      }
    }

    System.out.println(answer - (countR * countC));

  }

}