import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();

    TreeMap<Integer, Integer> mp = new TreeMap<>();

    for (int i = 0; i < n; i++) {
      int v = sc.nextInt();
      mp.put(v, i);
    }
    sc.close();

    if (k <= mp.size()) {
    
      System.out.println("YES");
  
      int[] answer = new int[mp.size()];
      int current = 0;
      
      for (Integer value : mp.values()) {
        answer[current] = value + 1;
        current++;
      }
      
      Arrays.sort(answer);
      
      for (int i = 0; i < k; i++) {
        System.out.print(answer[i] + " ");
      }
      
      System.out.println("");
    
    } else {
      System.out.println("NO");
    }

  }

}