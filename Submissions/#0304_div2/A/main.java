import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int n = sc.nextInt();
    int w = sc.nextInt();
    sc.close();

    int answer = 0;

    for (int i = 0; i < w; i++){
      answer += (i + 1) * k;
    }
  
    answer = answer - n;
  
    if (0 < answer) {
      System.out.println(answer);
    } else {
      System.out.println(0);
    }

  }

}