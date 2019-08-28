#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <time.h>
char side;
char cardSelect(void);
int compare(char p1, char p2);
int main(void){
	setup();
	srand(time(NULL));
	int aS = rand()  % 5;
	char eC, sC;
	if (side == 'E'){
		eC = cardSelect();	
		sC = (aS == 0) ? 'S' : 'C'	;
	}
	else{
		eC = (aS == 0) ? 'E' : 'C';
		sC = cardSelect();

	}
	int res = (compare(eC, sC));//cardSelect();
	if (res == 0){
		printf("%s", "It's a draw! \n");
	}
	else if (res == 1){
		printf("%s", "The Emperor wins! \n");
	}
	else{
		printf("%s", "The Slave wins! \n");
	}
	printf("%d %s", aS, "Fool!");	
	return EXIT_SUCCESS;
}
int compare(char p1, char p2){
	//Both Citizens
	if (p1 == p2){
		return 0;
	}
	//Emperor Slave
	else if (p1 == 'E' && p2 == 'S'){//Slave Wins
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
char cardSelect(void){
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
	}
	return card;
}
