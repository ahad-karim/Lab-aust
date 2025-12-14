import java.util.Scanner;

public class Loop7 {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);

        System.out.println("Input: ");
        int num = myObj.nextInt();
        boolean prime = true;

        for (int i = 2; i < num/2; i++) {
            if (num%i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            System.out.println(num + " is prime");
        } else {
            System.out.println(num + " is not prime");
        }
    }
}
