import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();
    
    String[] s = S.split("");

    Set<String> st = new TreeSet<String>();

    for (int i = 0; i < s.length; i++) {
      st.add(s[i]);
    }

    if (st.size() % 2 == 0) {
      System.out.println("CHAT WITH HER!");
    } else {
      System.out.println("IGNORE HIM!");
    }

  }

}