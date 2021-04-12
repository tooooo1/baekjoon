import java.util.Scanner;
import java.util.StringTokenizer;

public class Baek_1152 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = in.nextLine();
        in.close();

        StringTokenizer st = new StringTokenizer(str," ");
        System.out.println(st.countTokens());
    }
}
