/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
<<<<<<< HEAD
    print("NEGSUPPORT: conflict statement");
=======
    printf("NEGSUPPORT: conflict statement");
>>>>>>> br_negativeSupport
	if (argc != 2) {
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
    if(input < 0){
        input = -(input);
        printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
        printf("NEGSUPPORT: End ofprogram. Exiting.\n");
        exit(-1);
    }
	printf("NEGSUPPORT: Sqrt of %d is %fi\n",input,sqrt(input));
    printf("NEGSUPPORT: End ofprogram. Exiting.\n");
	return(0);

} // end main
