import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello Java");

        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter username: ");
        String userName = myObj.nextLine();
        System.out.println("Username is: " + userName);
    }
}
