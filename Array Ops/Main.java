public class Main {
    public static void main(String[] args) {
        while (true) {
            System.out.println("\nMenu:");
            System.out.println("1. Create Array");
            System.out.println("2. Display Array");
            System.out.println("3. Insert Element");
            System.out.println("4. Delete Element");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            int ch = ArrOps.sc.nextInt();

            switch (ch) {
                case 1:
                    ArrOps.create();
                    break;
                case 2:
                    ArrOps.display();
                    break;
                case 3:
                    ArrOps.insert();
                    break;
                case 4:
                    ArrOps.delete();
                    break;
                case 5:
                    System.exit(0);
                default:
                    System.out.println("Invalid");
            }
        }
    }
}
