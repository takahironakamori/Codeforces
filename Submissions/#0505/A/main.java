import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String S = sc.next();
    sc.close();

    String answer = "Yes";

    String[] s = S.split("");
    
    Set<String> st = new TreeSet<String>();

    for (int i = 0; i < n; i++) {
      st.add(s[i]);
    }

    if (st.size() == n && st.size() != 1) {
      answer = "No";
    }
    
    System.out.println(answer);
  
  }

}