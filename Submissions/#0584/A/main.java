import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] a = new int[n];
    int[] check = new int[101];

    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }

    sc.close();

    Arrays.sort(a);

    Set<Integer> answer = new TreeSet<Integer>();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (check[a[j]] == 0) {
          if (a[j] % a[i] == 0) {
            check[a[j]] = 1;
            answer.add(a[i]);
          }
        }
      }
    }

    System.out.println(answer.size());
    
  }

}