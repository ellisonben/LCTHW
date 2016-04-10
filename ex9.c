#include <stdio.h>

void foo()
{
	printf("trial.\n");
	foo();
	int numbers[4];
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
}

int main(int argc, char *argv[])
{
	foo();
	foo();
	int numbers[4] = {3};
	char name[4] = {'a'};

	// first print them out raw - I have not assigned them values at this point

	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %d %d %d %d\n", name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name); 
	// how has the name been printed as a in the second print statement when the value has been assigned the fifth element of the array?

	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// setup the name 

	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	// print them out unitialised - what does this mean?
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	// print the name like a string
	printf("name: %s\n", name);

	// another way to use name
	char *another = "Zed";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

	return 0;
}
