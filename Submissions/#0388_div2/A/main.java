import java.util.*;
import java.io.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    PrintWriter out = new PrintWriter(System.out);

    if (n % 2 == 0) {
      out.println(n / 2);
      for (int i = 0; i < n / 2; i++) {
        out.print(2 + " ");
      }
      out.println("");
    } else {
      out.println(n / 2);
      for (int i = 0; i < n / 2 - 1; i++) {
        out.print(2 + " ");
      }
      out.println("3");
    }
    out.flush();

  }

}