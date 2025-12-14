import java.util.Scanner;

public class Hello3 {
    public static void main(String[] args) {
        System.out.println(" Enter marks out of 100: ");
        Scanner myObj = new Scanner(System.in);

        int mark = myObj.nextInt();

        if ( mark <= 100 && mark >= 80) {
            System.out.println("Grade: A+");
        } else if (mark <= 79 && mark >= 75) {
            System.out.println("Grade: A");
        } else if (mark <= 74 && mark >= 70) {
            System.out.println("Grade: A-");
        } else if (mark <= 69 && mark >= 60) {
            System.out.println("Grade: B+");
        } else if (mark <= 59 && mark >= 50) {
            System.out.println("Grade: B-");
        } else if (mark <= 49 && mark >= 40) {
            System.out.println("Grade: C+");
        } else if (mark <= 39 && mark >= 0) {
            System.out.println("Grade: F");
        }
    }
}