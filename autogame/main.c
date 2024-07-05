#include "autogame.h"
#include "func.c"

int main() {
    int choice;
    srand(time(0)); // Initialize random number generator.
    while (1) {
	printf("\n\n**********\n***********\n");
        printf("Welcome to CQuest!\n");
        printf("Choose a challenge:\n");
        printf("1. Learn about pointers\n");
        printf("2. Learn about pointer to pointer\n");
        printf("3. Learn about arrays\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                pointerChallenge();
                break;
            case 2:
                pointerToPointerChallenge();
                break;
            case 3:
                arrayChallenge();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

