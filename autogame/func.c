
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
    int array[8], i;
    int question = rand() % 7;
	
	for (i = 0; i < 8; ++i)
  		{
    		array[i]= rand() % 30;
  		}
    printf("\nArray Challenge:\n");

        printf("You have an integer array with values: \n");
        printf("{ ");
        printf(" %d ", array[0]);

			for (i = 1; i < 8; ++i)
  				{
    			printf(", %d ", array[i]);
  				}

			printf(" }");
			printf("\n What is the value at index %d \n Please enter the answer:", question	);

			int answer;
			scanf("%d", &answer);

        if (answer == array[question] ) {
            printf("Correct! The value at index %d is %d.\n",question, array[question]);
        } else {
            printf("Incorrect. The correct answer is %d.\n", array[question] );
        }
    
}
