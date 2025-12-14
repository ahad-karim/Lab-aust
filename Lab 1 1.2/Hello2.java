import java.util.Scanner;

public class Hello2 {
    public static void main(String[] args) {
        System.out.println("Input: ");
        Scanner myObj = new Scanner(System.in);

        int n = myObj.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = myObj.nextInt();
        }
        
        System.out.println("num to find: ");
        int num = myObj.nextInt();

        for (int i = 0; i <= n; i++) {
            if (i == n) {
                System.out.println("Not found");
                break;
            }
            if(arr[i] == num) {
                System.out.println("The index is: "+i);
                break;
            }
        }

    }
}
