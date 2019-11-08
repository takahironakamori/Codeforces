import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    int[][] card = new int[n][2];

    for (int i = 0; i < n; i++) {
      card[i][0] = sc.nextInt();
      card[i][1] = i + 1;
    }
    sc.close();

    Arrays.sort(card, (a, b) -> Integer.compare(a[0],b[0]));

    for (int i = 0; i < n / 2; i++) {
      System.out.println(card[i][1] + " " + card[n - 1 - i][1]);
    }

  }

}