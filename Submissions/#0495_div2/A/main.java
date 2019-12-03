import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int d = sc.nextInt();

    int[] x = new int[n];

    Set<Integer> st = new TreeSet<Integer>();
    for (int i = 0; i < n; i++) {
      x[i] = sc.nextInt();
      st.add(x[i] - d);
      st.add(x[i] + d);
    }

    sc.close();

    int answer = 0;

    for (Integer v : st) {
      boolean flg = true;
      for (int i = 0; i < n; i++) {
        if (Math.abs(x[i] - v) < d) {
          flg = false;
          break;
        }
      }
      if (flg) {
        answer++;
      }
    }

    System.out.println(answer);
  
  }

}