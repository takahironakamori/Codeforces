import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int k2 = sc.nextInt();
    int k3 = sc.nextInt();
    int k5 = sc.nextInt();
    int k6 = sc.nextInt();
    sc.close();

    int count = Math.min(k2, k5);
  
    count = Math.min(count, k6);

    int answer = count * 200 + count * 50  + count * 6;

    count = Math.min(k3, k2 - count);

    answer += count * 30 + count * 2;

    System.out.println(answer);
    
  }

}