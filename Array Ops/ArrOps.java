import java.util.Scanner;

public class ArrOps {
    static final int MAX = 100;
    static int[] arr = new int[MAX];
    static int n = 0;
    static Scanner sc = new Scanner(System.in);

    public static void create() {
        System.out.print("Enter the number of elements: ");
        n = sc.nextInt();
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public static void display() {
        System.out.println("Array elements are:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void insert() {
        System.out.print("Enter element: ");
        int elem = sc.nextInt();
        System.out.print("Pos to enter element: ");
        int pos = sc.nextInt();
        pos--;
        if (pos < 0 || pos > n) {
            System.out.println("Invalid ");
            return;
        }
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = elem;
        n++;
    }

    public static void delete() {
        System.out.print("Pos to delete element: ");
        int pos = sc.nextInt();
        if (pos < 0 || pos >= n) {
            System.out.println("Invalid ");
            return;
        }
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
}
