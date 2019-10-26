import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int l = sc.nextInt();
    int r = sc.nextInt();
    sc.close();

    int answer = -1;
  
    for (int i = l; i <= r; i++) {
  
      String s = String.valueOf(i);
      String[] S = s.split("");

      int[] v = new int[10];
      
      for (int j = 0; j < S.length; j++) {
        v[Integer.valueOf(S[j])]++;
      }
      
      int c = 0;
      
      for (int j = 0; j < 10; j++) {
        if(1 < v[j]){
          c = 1;
          break;
        }
      }
      
      if (c == 0) {
        answer = i;
        break;
      }
  
    }
    System.out.println(answer);

  }

}