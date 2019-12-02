import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int k = sc.nextInt();
    int n = sc.nextInt();
    int s = sc.nextInt();
    int p = sc.nextInt();
    sc.close();
    
    int total = k * (int) Math.ceil((double) n / s);

    int answer = (int) Math.ceil((double) total / p);

    System.out.println(answer);
  
  }

}