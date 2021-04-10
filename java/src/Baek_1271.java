import java.util.Scanner;

class N {
    private int n,m;

    public N(int n,int m) {
        this.n = n;
        this.m = m;
    }

    public int Go(int n,int m) {
        return n/m;
    }
    public int Goto(int n,int m) {
        return n%m;
    }

}

public class Baek_1271 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        in.close();


        N a = new N(n,m);

        System.out.println(a.Go(n,m));
        System.out.println(a.Goto(n,m));

    }
}
