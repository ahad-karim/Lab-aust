import java.util.Scanner;

public class Loop15 {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        System.out.printf("Input: ");
        int n = myObj.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n-i; j++) {
                System.out.printf(" ");
            }
            for (int j = 0; j < (2*i)-1; j++) {
                System.out.printf("*");
            }
            System.out.printf("\n");
        }

        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j <=i; j++) {
                System.out.printf(" ");
            }
            for (int j = 0; j < 2*(n-i-1)-1; j++) {
                System.out.printf("*");
            }
            System.out.printf("\n");
        }
    }
}
