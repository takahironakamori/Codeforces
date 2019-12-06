import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int y = sc.nextInt();
    int b = sc.nextInt();
    int r = sc.nextInt();
    sc.close();

    int answer = 0;

    for (int i = 1; i <= 98; i++) {
      if (i <= y && (i + 1) <= b && (i + 2) <= r) {
        answer = i;
      }
    }

    System.out.println(answer * 3 + 3);
  
  }

}