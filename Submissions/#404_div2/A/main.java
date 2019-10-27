import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    
    int answer = 0;

    for (int i = 0; i < n; i++) {
      String s = sc.next(); 
      if (s.equals("Tetrahedron")) {
        answer += 4;
      } else if (s.equals("Cube")) {
        answer += 6;
      } else if (s.equals("Octahedron")) {
        answer += 8;
      } else if (s.equals("Dodecahedron")) {
        answer += 12;
      } else {
        answer += 20;
      }
    }

    sc.close();

    System.out.println(answer);

  }

}