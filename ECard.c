#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
char side;
int main(void){
	printf("%s", "Howdy");
	setup();
	cardSelect();
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
	side = 'Z';
	int validSelection = 0;
	while (validSelection == 0){
		printf("%s", "What side do you wish to play? Emperor or Slave?\n");
		scanf(" %c", &side);
		if (toupper(side) == 'S' || toupper(side) == 'E'){
			validSelection = 1;
		}
		else{
			printf("%c%s", side, "d\n");
			printf("%s", "Invalid Selection. Please choose again!");
		}

	}
	side = toupper(side);
	if (side == 'S'){
		printf("%s", "You have chosen to play with the slave!");
		
	}else{

		printf("%s", "You have chosen to play with the emperor!");
	}

}
void cardSelect(void){
	int validSelection = 0;
	char card;
	while(validSelection == 0){
	printf("%s", "Select your card, using C for Citizen, S for slave or E for emperor");
	scanf(" %c", &card);
	card = toupper(card);
	if (card == 'S' || card == 'E' || card == 'C'){
		printf("%s" , "Moo");
		if (!((card == 'S' && side == 'E')||(card == 'E' && side == 'S'))){
			printf("%s", "Meow");
			validSelection = 1;
	}
		else{
			"Invalid Selection";
		}
	}
//	 (toupper(side) ==  )
	}
//	return 'e';
}
