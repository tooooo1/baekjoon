import java.util.Scanner;

public class Baek_2920 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] ascending = {1,2,3,4,5,6,7,8};
        int[] descending = {8,7,6,5,4,3,2,1};
        int[] input = new int[8];

        for (int i=0;i<8;i++) {
            input[i]=in.nextInt();
        }

        if(equals(input,ascending)) {
            System.out.print("ascending");
        }else if (equals(input,descending)) {
            System.out.print("descending");
        }else {
            System.out.print("mixed");
        }
    }
    static boolean equals(int[] ascending, int[] descending) {
        for(int i=0; i<(ascending.length); i++) {
            if(ascending[i] != descending[i]){
                return false;
            }
        }
        return true;
    }
}
