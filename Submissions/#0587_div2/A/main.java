import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    String S = sc.next();
    char[] s = S.toCharArray();

    sc.close();

    int count = 0;

    for (int i = 0; i < n - 1; i += 2) {
      if (s[i] == 'a' && s[i + 1] == 'a') {
        count++;
        s[i] = 'b';
      } else if (s[i] == 'b' && s[i + 1] == 'b') {
        count++;
        s[i] = 'a';
      }
    }

    PrintWriter out = new PrintWriter(System.out);
    out.println(count);
    out.println(s);
    out.flush();

  }

}