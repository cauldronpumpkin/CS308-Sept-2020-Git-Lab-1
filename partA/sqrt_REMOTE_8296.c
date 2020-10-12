/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int length = strlen(argv[1]);

	for (int i=0; i < length; i++)
    {
		if ((i == 0 && !isdigit(argv[1][i]) && argv[1][i] != '-') || (i != 0 && !isdigit(argv[1][i])))
        {
            printf ("Passed argument is not a number\n");
            printf("End of program. Exiting.\n");
            exit(1);
        }
    }

	int input = atoi(argv[1]);
	if (input < 0)
	{
		input = -input;
		printf("Sqrt of %d is %fi\n",input,sqrt(input));
		printf("End of program. Eiting.\n");
	}
	else
	{
		printf("Sqrt of %d is %f\n",input,sqrt(input));
		printf("End of program. Exiting.\n");
	}

	return(0);

} // end main
