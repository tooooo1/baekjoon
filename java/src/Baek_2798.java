import java.util.Scanner;

public class Baek_2798 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // N의 값을 입력받는다.
        int N = in.nextInt();
        // M의 값을 입력받는다.
        int M = in.nextInt();

        //입력받은 N만큼 배열 arr[]를 생성한다.
        int[] arr = new int[N];

        //N개마다 각각 값을 입력받는다.
        for (int i = 0; i<N; i++) {
            arr[i] = in.nextInt();
        }

        //메서드 search를 이용해 문제에 접근한다.
        //메서드는 main함수 아래에 구현한다.
        int result = search(arr,N,M);

        //문제에서 원하는 값 result를 출력한다.
        System.out.println(result);
    }
    //메서드 search
    public static int search(int[] arr,int N,int M) {
        //결과값인 result 값 초기화
        int result =0;

        //첫번째 카드
        for (int i =0; i < N-2; i++) {
            //두번째 카드
            for(int j = i+1; j<N-1; j++) {
                //세번째 카드
                for(int k = j+1; k<N;k++) {

                    //세 수의 합 : add
                    int add = arr[i] + arr[j] + arr[k];

                    //딜러가 부른 숫자와 일치하면 add return
                    if(M == add) {
                        return add;
                    }

                    //그렇지 않다면 최대한 근접하게 result 값에 넣어준다.
                    if((result < add) && (add < M)) {
                        result =add;
                    }
                }
            }
        }

        //마지막엔 우리가 원하는 결과값인 result return
        return result;
    }
}
