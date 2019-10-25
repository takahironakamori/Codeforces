import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {

      String S = sc.next();
      char[] s = S.toCharArray();
      int n = s.length;
      int[] v = new int[26];

      for (int j = 0; j < n; j++) {

        char current = s[j];
        int count = 0;
        boolean validate = true;
        
        while (validate) {
          if (j == n) {
            validate = false;
          } else if (current == s[j]) {
            j++;
            count++;
          } else {
            validate = false;
          }
        }

        if (count % 2 == 1) {
          v[(int) current - 97] = 1;
        }

        j--;

      }

      for (int j = 0; j < 26; j++) {
        if (v[j] == 1) {
          System.out.print(Character.toChars(j + 97)); 
        }
      }

      System.out.println("");

    }

    sc.close();

  }

}