import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int v = sc.nextInt();
    sc.close();

    int answer = v;

    if (n - 1 <= v) {
      answer = n - 1;
    }

    for (int i = 2; i <= n - v; i++){
      answer += i;
    }

    System.out.println(answer);
  
  }

}