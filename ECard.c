#include <stdlib.h>
#include <stdio.h>

int main(void){
	printf("%s", "Howdy");
	setup();
	return EXIT_SUCCESS;
}
int compare(char p1, char p2){
	//Both Citizens
	if (p1 == p2){
		return 0;
	}
	//Emperor Slave
	else if (p1 == 'e' && p2 == 's'){//Slave Wins
		return -1;
	}
	//Emperor Citizen
	else {//Emperor Wins
		return 1;
	}	
}
int setup(void){
	char side = 'x';
	int validSelection = 0;
	while (validSelection == 0){
	printf("%s", "What side do you wish to play? Emperor or Slave?\n");
	scanf(" %c", &side);
	if (side == 's' || side == 'e' || side == 'S' || side == 'E'){
		validSelection = 1;
	}
	else{
		printf("%c%s", side, "d\n");
		printf("%s", "Invalid Selection. Please choose again!");
	}

	}

printf("%s", "fools");
}
