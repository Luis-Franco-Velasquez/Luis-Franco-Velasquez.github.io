import java.util.Scanner;

public class MachineProblem2 {
    public static void main (String [] args) {
        final int QUARTS_IN_GALLON = 4;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of quarts: ");
        int quarts = scanner.nextInt();

        int gallons = quarts / QUARTS_IN_GALLON;
        int remainingQuarts = quarts % QUARTS_IN_GALLON;

        //sentence format
        System.out.println(quarts + " quarts is equivalent to " + gallons + " gallons and " + remainingQuarts + " quart(s).");

        scanner.close();
    }
}
