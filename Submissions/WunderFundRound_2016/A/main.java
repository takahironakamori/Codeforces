import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();
    
    String A = binary(n);

    char[] answer = A.toCharArray();

    for (int i = 0; i < answer.length; i++) {
      if (answer[i] == '1') {
        System.out.print((answer.length - i) + " ");
      }
    }

    System.out.println("");

  }

  static String binary(int v){
    long ans = 0;
    for (int i = 0; v > 0 ; i++)
    {
      ans = ans + (v % 2) * (long) Math.pow(10, i);
      v = v / 2;
    }
    return String.valueOf(ans);
  }


}