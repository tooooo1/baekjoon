import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Baek_1158 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        //queue를 선언한다.
        Queue<Integer> q = new LinkedList<>();

        int N = in.nextInt();
        int K = in.nextInt();

        //N번까지 queue에 추가.
        for(int i =1;i<=N;i++) {
            q.add(i);
        }

        //String을 계속 추가, 수정해야하므로 StringBuilder 선언 !
        StringBuilder people = new StringBuilder();
        people.append('<');

        //queue에서 다 뽑을 때까지 계속 돌린다.
        while (q.size()>1) {

            //K의 배수가 아닌 값은 뽑고 다시 넣는다.
            for(int i =0; i<K-1;i++) {
                int value = q.poll();
                q.offer(value);
            }
            //뽑은 값을 String에 추가
            people.append(q.poll()).append(", ");
        }

        //마지막에 '>'로 닫아주고 출력
        people.append(q.poll()).append('>');
        System.out.println(people);
    }
}
