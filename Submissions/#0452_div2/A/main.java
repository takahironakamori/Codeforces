import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    int[] count = new int[3];
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      count[a]++;
    }
  
    sc.close();

    int answer = 0;

    if (count[2] == 0) {
      answer = count[1] / 3;
    } else if (count[2] <= count[1]) {
      answer = count[2];
      count[1] = count[1] - count[2];
      if (0 < count[1]) {
        answer += count[1] / 3;
      }
    } else {
      answer = count[1];
    }

    System.out.println(answer);

  }

}