import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    Set<Integer> st = new TreeSet<Integer>();

    for (int i = 0; i < 4; i++) {
      int s = sc.nextInt();
      st.add(s);
    }

    sc.close();

    System.out.println(4 - st.size());

  }

}