#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv - input from cmd line
	// why am I skipping argv[0]? - because this will be ./ex10 in the input - you can set i as 0 and it just prints that as arg0.
	for(i = 1; i<argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings
	char *states[] = {"California", "Oregon", "Washington", "Texas"};
	int num_states = 4;

	for(i = 0; i < num_states; i++) {
		printf("state %d: %d\n", i+1, states[i]);
	}

	//question: how do I look up a particular character in a string in an array of strings?  states[si][ci]  ?

	//question: how do I use the output of another program - perhaps in a different language, such as python, and use that as the input into a c program?

	return 0;
}
