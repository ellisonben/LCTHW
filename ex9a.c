#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	printf("1st char of name: %d\n", name[0]);
	printf("2nd char of name: %d\n", name[1]);
	printf("3rd char of name: %d\n", name[2]);
	printf("4th char of name: %d\n", name[3]);
	printf("5th char of name: %d\n", name[4]);
	printf("6th char of name: %d\n", name[5]);

	//from this experiment it seems that the iniitialiser creates an array with a first character of a that is four characters long and then terminating automatically with a nul-byte - the fifth character displays a little diamond with a question mark in it when you run it in the terminal

	char name2[3] = {'a', 'b', 'c', 'd'};

	printf("1st char of name2: %c\n", name2[0]);
	printf("2nd char of name2: %c\n", name2[1]);
	printf("3rd char of name2: %c\n", name2[2]);
	printf("4th char of name2: %c\n", name2[3]);
	printf("5th char of name2: %c\n", name2[4]);
	printf("6th char of name2: %c\n", name2[5]);

	//running this second section of code gives an error of too many elements in the array initialiser as I have specified three and put four in - starting to make more sense

	return 0;
}
