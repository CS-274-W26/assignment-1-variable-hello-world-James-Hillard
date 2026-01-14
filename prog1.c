#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	srand(time(NULL));

	// Generating random number
	int myrand = rand() % 11;

	// Outputs
	if (myrand < 5)	// Beef Option
	{
		printf("Eat more beef, kick less cats\n");
	}
	else if (myrand < 10)	// Frodo Option
	{
		printf("FRODO LIVES\n");
	}
	else	// Larn Option
	{
		printf("Larn is the best roguelike\n");
	}

	// Print
	printf("The random number was: %d \n", myrand);
}
