import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class Baek_1181 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String[] str = new String[N];

        for (int i = 0; i < N ; i++) {
            str[i]=in.next();
        }

        Arrays.sort(str, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (o1.length() == o2.length()) {
                    return o1.compareTo(o2);
                }
                else {
                    return o1.length() - o2.length();
                }
            }
        });

        System.out.println(str[0]);
        for(int i =1 ; i < N; i++) {
            if (!str[i].equals(str[i-1])) {
                System.out.println(str[i]);
            }
        }
    }
}
