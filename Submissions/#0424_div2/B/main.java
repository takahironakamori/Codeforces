import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    String a = sc.next();
    String b = sc.next();
    String c = sc.next();
    sc.close();

    TreeMap<String, String> mp = new TreeMap<>();

    char[] A = a.toCharArray();
    char[] B = b.toCharArray();
    char[] C = c.toCharArray();
    String[] C2 = c.split("");

    for (int i = 0; i < 26; i++) {
      int intA = (int) A[i];
      int intB = (int) B[i];
      String sA = String.valueOf(Character.toChars(intA));
      String sB = String.valueOf(Character.toChars(intB));
      String lA = String.valueOf(Character.toChars(intA - 32));
      String lB = String.valueOf(Character.toChars(intB - 32));
      mp.put(sA, sB);
      mp.put(lA, lB);
    }
  
    for (int i = 0; i < C.length; i++) {
      int intC = (int) C[i];
      if (65 <= intC && intC <= 90) {
        System.out.print(mp.get(C2[i]));
      } else if (97 <= intC && intC <= 122) {
        System.out.print(mp.get(C2[i]));
      } else {
        System.out.print(C2[i]);
      }
      
    }

    System.out.println("");

  }

}