import java.util.Scanner;
import java.util.Stack;

public class Baek_10828 {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        String[] order = new String[num];

        for (int i =0; i<num; i++) {
            order[i] = in.nextLine();
        }

        for (int i=0; i<num;i++) {
            if(order[i].substring(0,3).equals("push")) {
                stack.push(Integer.getInteger(order[i].substring(5)));
            }
            if(order[i].substring(0,2).equals("pop")) {
                if(stack.size()==0) {
                    System.out.println(-1);
                } else {
                    System.out.println(stack.peek());
                    stack.pop();
                }
            }
            if(order[i].substring(0,3).equals("size")) {
                System.out.println(stack.size());
            }
            if(order[i].substring(0,4).equals("empty")) {
                System.out.println(stack.empty());
            }
            if(order[i].substring(0,2).equals("top")) {
                if(stack.empty()) {
                    System.out.println(-1);
                }else {
                    System.out.println(stack.peek());
                }
            }
        }

    }
}
