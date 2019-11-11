import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int answer1 = 1;
    int answer2 = 1;
    int answer3 = n - 2;

    if (n % 3 == 2) {
      answer1 = 1;
      answer2 = 2;
      answer3 = n - 3;
    }

    System.out.println(answer1 + " " + answer2 + " " + answer3);
    
  }

}