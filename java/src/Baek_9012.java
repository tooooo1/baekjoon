import java.util.Scanner;

public class Baek_9012 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        //값을 입력받는다.
        int T = in.nextInt();
        String[] VPS = new String[T];

        // T값만큼 괄호를 받는다.
        for(int i=0;i<T;i++) {
            VPS[i] = in.next();
        }

        for(int i=0;i<T;i++) {
            // '('를 세는 카운터, 한바퀴마다 초기화한다.
            int count=0;

            //길이만큼 반복한다.
            for(int j=0;j<VPS[i].length();j++) {
                if(VPS[i].charAt(j) == '(') {
                    count++;
                } else if (VPS[i].charAt(j) == ')') {
                    count--;
                    //중요! ')'가 먼저 입력되면 NO를 출력하도록
                    //높은 수를 더해준다.
                    if(count<0) {
                        count=count+10000;
                    }
                }
            }

            //YES or NO 출력문
            if(count==0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
