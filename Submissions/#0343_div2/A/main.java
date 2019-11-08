import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] row = new int[n];
    int[] col = new int[n];
    for (int i = 0; i < n; i++) {
      String C = sc.next();
      String[] c = C.split("");
      for (int j = 0; j < c.length; j++) {
        if (c[j].equals("C")){
          row[i]++;
          col[j]++;
        }
      }
    }
    sc.close();

    int answer = 0;

    for (int i = 0; i < n; i++) {
      if (2 <= row[i]) {
        answer += (row[i] - 1) * row[i] / 2;
      }
      if (2 <= col[i]) {
        answer += (col[i] - 1) * col[i] / 2;
      }
    }

    System.out.println(answer);

  }

}