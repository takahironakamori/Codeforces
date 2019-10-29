import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close(); 

    String[] s = S.split("");

    Queue<Integer> groupB = new ArrayDeque<>();

    int countB = 0;

    for (int i = 0; i < n; i++) {
      if (s[i].equals("B")) {
        countB++;
      } else {
        if (0 < countB) {
          groupB.add(countB);
        }
        countB = 0;
      }
      if (i == n - 1) {
        if (0 < countB) {
          groupB.add(countB);
        }
      }
    }

    System.out.println(groupB.size());

    if (0 < groupB.size()) {

      while (!groupB.isEmpty()) {
        Integer v = groupB.poll();
        System.out.print(v + " ");
      }
  
      System.out.println("");

    }
    
  }

}