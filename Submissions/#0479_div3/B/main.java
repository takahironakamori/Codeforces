import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    String s = sc.next();
    sc.close();

    TreeMap<String, Integer> mp = new TreeMap<>();

    for (int i = 0; i < n - 1; i++) {
      String s_ = s.substring(i, i + 2);
      if (mp.containsKey(s_)) {
        int v_ = mp.get(s_);
        mp.put(s_, v_ + 1);
      } else {
        mp.put(s_, 1);
      }
    }
  
    String answer = "";
    int maxCount = 0;
  
    for (Map.Entry<String, Integer> map : mp.entrySet()) {
      if (maxCount < map.getValue()) {
        maxCount = map.getValue();
        answer = map.getKey();
      }
    }

    System.out.println(answer);
  
  }

}