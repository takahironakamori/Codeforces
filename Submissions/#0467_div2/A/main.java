import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    Set<Integer> st = new TreeSet<Integer>();

    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      if (a != 0) {
        st.add(a);
      }
    }

    sc.close();

    System.out.println(st.size());

  }

}