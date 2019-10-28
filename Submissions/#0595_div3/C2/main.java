import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
  
    int q = sc.nextInt();

    for (int i = 0; i < q; i++) {

      long n = sc.nextLong();
      
      List<Long> vals = new ArrayList<>();
      int pos2 = -1;
      while (0 < n) {
        vals.add(n % 3);
        if (vals.get(vals.size() - 1) == 2) {
          pos2 = vals.size() - 1;
        }
        n /= 3;
      }

      vals.add((long) 0);
      
      if (pos2 != -1) {
        List<Long> _vals = vals.subList(pos2, vals.size());
        int pos0 = _vals.indexOf((long) 0);
        pos0 += pos2;
        vals.set(pos0, (long) 1);
        for (int j = pos0 - 1; 0 <= j; j--) {
          vals.set(j,(long) 0);
        }
      }

      long ans = 0;
      long c = 1;
      
      for (int j = 0; j < vals.size(); j++) {
        ans += c * vals.get(j);
        c *= 3;
      }
      
      if (vals.get(vals.size() - 1) == 1) {
        ans = c / 3;
      }

      System.out.println(ans);

    }

    sc.close();

  }

}