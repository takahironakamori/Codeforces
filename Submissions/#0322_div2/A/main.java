import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    sc.close();

    System.out.println(Math.min(a,b) + " " + (int) Math.abs(a - b) / 2);

  }

}