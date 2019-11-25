import java.util.*;

public class Main {

  public static void main (String[] args) {

    int max = 0;

    Scanner sc = new Scanner(System.in);
    int[] t = new int[5];
    for (int i = 0; i < 5; i++) {
      t[i] = sc.nextInt();
      max += t[i];
    }
    sc.close();

    int answer = max;

    // 2 枚カードを抜き取る場合
    for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
        if (t[i] == t[j]) {
          answer = Math.min(answer, max - t[i] * 2);
        }
      }
    }

    // 3 枚カードを抜き取る場合
    for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
        for (int k = j + 1; k < 5; k++) {
          if (t[i] == t[j] && t[i] == t[k]) {
            answer = Math.min(answer, max - t[i] * 3);
          }
        }
      }
    }

    System.out.println(answer);

  }

}