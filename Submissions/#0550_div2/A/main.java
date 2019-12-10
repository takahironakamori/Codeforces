import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    for (int i = 0; i < n; i++) {
    
      String T = sc.next();
      char[] t = T.toCharArray();

      int[] count = new int[26];
  
      for (int j = 0; j < t.length; j++) {
        int k = (int) t[j] - 'a';
        count[k]++;
      }
  
      String answer = "Yes";
      boolean flg = false;
      int change = 0;
      
      for (int j = 0; j < 26; j++) {
        if (2 <= count[j]) {
          answer = "No";
          break;
        } else if (count[j] == 1) {
          if (!flg) {
            flg = true;
            change++;
          }
        } else {
          if(flg) {
            change++;
            flg = false;
          }
        }
      }
  
      if (answer == "No") {
        System.out.println(answer);
      } else if (change <= 2) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }
  
    }

    sc.close();

  }

}