import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) { 
    
      String S = sc.next();
      char[] s = S.toCharArray();
      
      int[] count = new int[26];
      int mx = 0;
      for (int j = 0; j < s.length; j++) {
        count[s[j] - 'a']++;
        mx = Math.max(mx, count[s[j] - 'a']);
      }
  
      if (mx == s.length) {
        System.out.println("-1");
      } else {
        for (int j = 0; j < 26; j++) {
          int c = count[j];
          for (int k = 0; k < c; k++) {
            System.out.print(Character.toChars(j + 97));
          }
        }
        System.out.println("");
      }
  
    }
    
    sc.close();
  
  }

}