#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pointerChallenge();
void pointerToPointerChallenge();
void arrayChallenge();

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

void pointerChallenge() {
    int var1 = 10, var2 = 20;
    int *ptr1 = &var1, *ptr2 = &var2;

    int question = rand() % 2;

    printf("\nPointer Challenge:\n");

    if (question == 0) {
        printf("You have an integer variable 'var1' with value 10.\n");
        printf("You have a pointer 'ptr1' pointing to 'var1'.\n");
        printf("What is the value of 'var1' through the pointer 'ptr1'? ");
        
        int answer;
        scanf("%d", &answer);

        if (answer == *ptr1) {
            printf("Correct! The value of 'var1' through the pointer 'ptr1' is %d.\n", *ptr1);
        } else {
            printf("Incorrect. The correct answer is %d.\n", *ptr1);
        }
    } else {
        printf("You have an integer variable 'var2' with value 20.\n");
        printf("You have a pointer 'ptr2' pointing to 'var2'.\n");
        printf("What is the value of 'var2' through the pointer 'ptr2'? ");
        
        int answer;
        scanf("%d", &answer);

        if (answer == *ptr2) {
            printf("Correct! The value of 'var2' through the pointer 'ptr2' is %d.\n", *ptr2);
        } else {
            printf("Incorrect. The correct answer is %d.\n", *ptr2);
        }
    }
}

void pointerToPointerChallenge() {
    int var1 = 30, var2 = 40;
    int *ptr1 = &var1, *ptr2 = &var2;
    int **pptr1 = &ptr1, **pptr2 = &ptr2;

    int question = rand() % 2;

    printf("\nPointer to Pointer Challenge:\n");

    if (question == 0) {
        printf("You have an integer variable 'var1' with value 30.\n");
        printf("You have a pointer 'ptr1' pointing to 'var1'.\n");
        printf("You have a pointer to pointer 'pptr1' pointing to 'ptr1'.\n");
        printf("What is the value of 'var1' through the pointer to pointer 'pptr1'? ");

        int answer;
        scanf("%d", &answer);

        if (answer == **pptr1) {
            printf("Correct! The value of 'var1' through the pointer to pointer 'pptr1' is %d.\n", **pptr1);
        } else {
            printf("Incorrect. The correct answer is %d.\n", **pptr1);
        }
    } else {
        printf("You have an integer variable 'var2' with value 40.\n");
        printf("You have a pointer 'ptr2' pointing to 'var2'.\n");
        printf("You have a pointer to pointer 'pptr2' pointing to 'ptr2'.\n");
        printf("What is the value of 'var2' through the pointer to pointer 'pptr2'? ");

        int answer;
        scanf("%d", &answer);

        if (answer == **pptr2) {
            printf("Correct! The value of 'var2' through the pointer to pointer 'pptr2' is %d.\n", **pptr2);
        } else {
            printf("Incorrect. The correct answer is %d.\n", **pptr2);
        }
    }
}

void arrayChallenge() {
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};

    int question = rand() % 2;

    printf("\nArray Challenge:\n");

    if (question == 0) {
        printf("You have an integer array 'arr1' with values {1, 2, 3}.\n");
        printf("What is the value at index 1 of 'arr1'? ");
        
        int answer;
        scanf("%d", &answer);

        if (answer == arr1[1]) {
            printf("Correct! The value at index 1 of 'arr1' is %d.\n", arr1[1]);
        } else {
            printf("Incorrect. The correct answer is %d.\n", arr1[1]);
        }
    } else {
        printf("You have an integer array 'arr2' with values {4, 5, 6}.\n");
        printf("What is the value at index 2 of 'arr2'? ");
        
        int answer;
        scanf("%d", &answer);

        if (answer == arr2[2]) {
            printf("Correct! The value at index 2 of 'arr2' is %d.\n", arr2[2]);
        } else {
            printf("Incorrect. The correct answer is %d.\n", arr2[2]);
        }
    }
}
