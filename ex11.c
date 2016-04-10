#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv

	int i = argc-1;
	while(i > 0) {
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}

	//i have amended the above while loop to work through the argv array backwards 

	i = argc-1;
	while(i > 0) {
		printf("arg %d: %s\n", i, argv[argc-i]);
		i--;
	}

	//i have amended the above while loop to work through the argv array backwards but to print it forwards - it works!

	char *states[] = {"California", "Maryland", "Oregon", "Washington", "Texas"};
	int num_states = 4;
	printf("size of states array: %ld\n", sizeof(states));
	//i have looked at the size of the array - it is 32 - how do you find the size of the second dimension? is it sizeof(states[2])?

	i = 0;
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
