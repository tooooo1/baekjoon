import java.util.Scanner;

class Star {
    private int num,space;

    public Star() {
        this.num=num;
        this.space=space;
    }

    public void Star() {
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num - i; j++) {
                System.out.print(" ");
            }
            for (int k = 0; k < i; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

}

public class Baek_2439 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();

        Star a = new Star();

    }
}
