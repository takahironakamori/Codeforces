import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int count1 = 0;
    int count2 = 0;

    Queue<Integer> count = new ArrayDeque<>();

    for (int i = 0; i < n; i++) {
    
      int t = sc.nextInt();
  
      if (t == 1) {
        if(count2 != 0) {
          count.add(count2);
          count2 = 0;
        }
        count1++;
      } else {
        if(count1 != 0) {
          count.add(count1);
          count1 = 0;
        }
        count2++;
      }
  
      if(i == n - 1) {
        if (count1 != 0) {
          count.add(count1);
        }
        if (count2 != 0) {
          count.add(count2);
        }
      }
  
    }

    sc.close();

    int answer = 0;

    int v_ = 100010;

    for (Integer v : count) {
      if (v_ != 100010) {
        int mi = Math.min(v_, v);
        answer = Math.max(answer, mi * 2);
      }
      v_ = v;
    }

    System.out.println(answer);

  }

}