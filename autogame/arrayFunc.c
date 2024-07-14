
void arrayChallenge_1() {
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

void arrayChallenge_2() {
    printf("TEST Running arrayChallenge_2\n");
}

void arrayChallenge_3() {
    printf("TEST Running arrayChallenge_3\n");
}

void arrayChallenge_4() {
    printf("TEST Running arrayChallenge_4\n");
}

void arrayChallenge_5() {
    printf("TEST Running arrayChallenge_5\n");
}