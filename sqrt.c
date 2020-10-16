/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
<<<<<<< HEAD
    print("DEBUG: conflict statement");
=======
    printf("DEBUG: conflict statement");
>>>>>>> br_negativeSupport
	if (argc != 2) {
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
    if(input < 0){
        input = -(input);
        printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
        printf("DEBUG: End ofprogram. Exiting.\n");
        exit(-1);
    }
	printf("DEBUG: Sqrt of %d is %fi\n",input,sqrt(input));
    printf("DEBUG: End ofprogram. Exiting.\n");
	return(0);

} // end main
