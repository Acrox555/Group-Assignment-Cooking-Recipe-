//1. add a new recipe 
//2. delete an existing  recipe 
//3. update an existing  recipe 
//4. display single  recipe
//5. display range  of recipe
//6. display all  recipe
//7. search for  recipe
//8. friendly / easy to use UI(or menu system)
//9. save accumulated data to disk
//10. load accumulated data from disk

//Group 8
//Adam Tom Jaison,Mehak Kondal -PROG71985 - Fall 2023 - Group Assignment , Q 3

#include <stdio.h>
#include <stdbool.h>
#include "recipe.h"


void printWelcome();
int main(void) {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int Choice = printMenu();

		switch (Choice)
		{
		case 1:
			addRecipe();
             break;
		case 2: 
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
 			break;
		
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}

	return 0;
}

//function to print Welcome menu
void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Recipe Manger **\n");
	printf_s(" **********************\n");
}

//function to read user input 
int printMenu() {
	printf_s("1. Add a new recipe \n");
	printf_s("2. Delete an existing  recipe\n");  
	printf_s("3. Display all  recipe\n");
	printf_s("4. Display single  recipe\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}