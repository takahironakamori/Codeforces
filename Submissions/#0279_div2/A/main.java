import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    TreeMap<Integer, Integer> map1 = new TreeMap<>(); // programming
    TreeMap<Integer, Integer> map2 = new TreeMap<>(); // math
    TreeMap<Integer, Integer> map3 = new TreeMap<>(); // PE

    int countMap1 = 0;
    int countMap2 = 0;
    int countMap3 = 0;
    
    for (int i = 0; i < n; i++) {
      String t = sc.next();
      if (t.equals("1")) {
        map1.put(countMap1, i + 1);
        countMap1++;
      } else if (t.equals("2")) {
        map2.put(countMap2, i + 1);
        countMap2++;
      } else {
        map3.put(countMap3, i + 1);
        countMap3++;
      }
    }

    sc.close();

    int count = map1.size();
    count = Math.min(count, map2.size());
    count = Math.min(count, map3.size());

    System.out.println(count);
    for (int i = 0; i < count; i++) {
      System.out.println(map1.get(i) + " " + map2.get(i) + " " + map3.get(i));
    }

  }

}