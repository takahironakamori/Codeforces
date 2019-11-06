import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String S = sc.nextLine();
    sc.close();

    Set<String> st = new TreeSet<String>();
    char[] s = S.toCharArray();

    for (int i = 0; i < s.length; i++) {
      int n = (int) s[i];
      if (97 <= n && n <= 122) {
        st.add(String.valueOf(s[i]));
      }
    }

    System.out.println(st.size());

  }

}