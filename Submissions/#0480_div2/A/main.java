import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String S = sc.next();
    sc.close();

    char[] s = S.toCharArray();

    int link = 0;
    int pearl = 0;

    for (int i = 0; i < S.length(); i++) {
      if (s[i] == 'o') {
        pearl++;
      } else {
        link++;
      }
    }
  
    if (link == 0 || pearl == 0){
      System.out.println("YES");
    } else {
      if (link % pearl == 0) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }
  
  }

}