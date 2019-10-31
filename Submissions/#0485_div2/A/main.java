import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    TreeMap<String, String> mp = new TreeMap<>();
    mp.put("purple", "Power");
    mp.put("green", "Time");
    mp.put("blue", "Space");
    mp.put("orange", "Soul");
    mp.put("red", "Reality");
    mp.put("yellow", "Mind");

    for (int i = 0; i < n; i++) {
      String l = sc.next();
      mp.put(l,"");
    }

    sc.close();

    System.out.println(6 - n);

    for (String value : mp.values()) {
      if (value != "") {
        System.out.println(value);
      }
    }

  }

}