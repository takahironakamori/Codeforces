import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    sc.close();

    int answer = 0;

    while (a <= b) {
    
      answer++;
  
      a *= 3;
      b *= 2;
  
    }

    System.out.println(answer);

  }

}