import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    sc.close();

    int l = S.length();
    S += S;
    String[] s = S.split("");

    Set<String> st = new TreeSet<String>();
    for (int i = 0; i < l; i++) {
      String tmp = "";
      for (int j = 0; j < l; j++) {
        tmp += s[i+j];
      }
      st.add(tmp);
    }

    System.out.println(st.size());

  }

}