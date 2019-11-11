import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();

    String[] S = new String[n];

    for (int i = 0; i < n; i++) {
      S[i] = sc.next();
    }

    sc.close();

    int answerN = 0;
    int answerM = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
      String[] s = S[i].split("");
      for (int j = 0; j < m; j++) {
        if (s[j].equals("B")) {
          answerN = i + 1;
          answerM = j + 1;
          count++;
        }
      }
    }

    int d =(int) Math.sqrt(count) / 2;

    answerN -= d;
    answerM -= d; 

    System.out.println(answerN + " " + answerM);

  }

}