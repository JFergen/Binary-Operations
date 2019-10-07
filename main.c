#include "main.h"

int main() {
    int choice;
    long long int usrInput;

    printMenu();
    scanf("%d", &choice);

    // Skips this menu and exits program if user enters (5) to EXIT. Continues until (5) is entered
    while (choice != 5) {
        switch(choice) {
            case 1: // Count Leading Zeroes
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%lld", &usrInput);
                
                // Checks bounds
                while(usrInput < 1 || usrInput > 4294967295) {
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%lld", &usrInput);
                }

                printf("Count leading Zeroes\n");
	            clz(usrInput); // Counts leading zeroes 

                printMenu();
                scanf("%d", &choice);
                break;
            case 2: // Endian Swap
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%lld", &usrInput);

                // Checks bounds
                while(usrInput < 1 || usrInput > 4294967295) {
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%lld", &usrInput);
                }

                printf("The Endian Swap of %lld gives %lld\n", usrInput, endian(usrInput));

                printMenu();
                scanf("%d", &choice);
                break;
            case 3: // Rotate-right
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%lld", &usrInput);

	            // Checks bounds
                while(usrInput < 1 || usrInput > 4294967295) {
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%lld", &usrInput);
                }

	            rotate(usrInput); // Rotate-right

                printMenu();
                scanf("%d", &choice);
                break;
            case 4: // Parity
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%lld", &usrInput);

                // Checks bounds
                while(usrInput < 1 || usrInput > 4294967295) {
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%lld", &usrInput);
                }

                printf("Parity of %lld is %d\n", usrInput, parity(usrInput)); // Outputs if parity is even or odd

                printMenu();
                scanf("%d", &choice);
                break;
            default: // If user enters an invalid choice, print menu and get another input
                printf("Error: Invalid option. Please try again.\n");
                printMenu();
                scanf("%d", &choice);
            }
    }   

    printf("Program terminating. Goodbye...");
    return 0;
}

// Function to print menu each time
void printMenu() {
    printf("Enter the menu operation for the operation to perform:\n");
    printf("(1) Count Leading Zeroes\n");
    printf("(2) Endian Swap\n");
    printf("(3) Rotate-right\n");
    printf("(4) Parity\n");
    printf("(5) EXIT\n");
    printf("--> ");

    return;
}