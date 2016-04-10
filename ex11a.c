#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	char *states[] = {"California", "Oregon", "Washington", "Texas"};
	while(i < argc) {
		states[i+3] = argv[i];
		i++;
	}
	// I am getting a *** stack smashing detected *** message on running the program and then it says core dumped. Valrgind doesn't give me errors but i have managed to use the while loop to add the argv into the states array - my idea for a solution is the above line but unfortunately that doesn't appear to be working - i thought it might be that the array wasn't terminating properly

	i = 0;
	int num_states = 3 + argc;
	while(i<num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
