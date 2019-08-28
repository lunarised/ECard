#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <time.h>
char side;
int citizens = 4;

int compare(char p1, char p2){
	
	if (p1 == p2){
		return 0;
	}
	else if (p1 == 'E' && p2 == 'S'){
		return -1;
	}
	else{
		return 1;
	}	
}
void setup(void){
	side = 'Z';
	citizens = 4;
	int validSelection = 0;
	while (validSelection == 0){
		printf("%s", "What side do you wish to play? Emperor or Slave?\n");
		scanf(" %c", &side);
		if (toupper(side) == 'S' || toupper(side) == 'E'){
			validSelection = 1;
		}
		else{
			printf("%c%s", side, "d\n");
			printf("%s", "Invalid Selection. Please choose again! \n");
		}

	}
	side = toupper(side);
	if (side == 'S'){
		printf("%s", "You have chosen to play with the slave! \n");
		
	}else{

		printf("%s", "You have chosen to play with the emperor! \n");
	}

}
/* */
char cardSelect(void){
	int validSelection = 0;
	char card;
	while(validSelection == 0){
		printf("%s", "Select your card, using C for Citizen, S for slave or E for emperor: ");
		scanf(" %c", &card);
		card = toupper(card);
		if (card == 'S' || card == 'E' || card == 'C'){
				
		
			if ((((card == 'S' && side == 'E')||(card == 'E' && side == 'S')))){
			printf("%s", "You cant use your opponents cards!\n");
			}	
			else if(card == 'C' && citizens == 0){
			printf("%s", "You have no more citizen cards\n");
			}
			else
				validSelection = 1;
		}
	}
	if (card == 'C'){
			citizens--;
		

	}
	return card;
}
int main(void){
	setup();
	srand(time(NULL));
	char eC, sC;
	while(1){
	int aS = rand()  %( citizens + 1);
	if (side == 'E'){
		eC = cardSelect();	
		sC = (aS == 0) ? 'S' : 'C'	;
	}
	else{
		eC = (aS == 0) ? 'E' : 'C';
		sC = cardSelect();

	}
	int res = (compare(eC, sC));
	if (res == 0){
		printf("%s", "It's a draw! \n");
	}
	else if (res == 1){
		printf("%s", "The Emperor wins! \n");
		break;
	}
	else{
		printf("%s", "The Slave wins! \n");
		break;
	}

	}
	return EXIT_SUCCESS;
}
