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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "recipe.h"


void printWelcome();
void addItem(RecipeManager* manage);
void inputCheck(int buff);
void displayAllItems(const RecipeManager* manager);

int main() {
    int choice;
    RecipeManager manager;
    manager.itemCount = 0;
    printWelcome();

    do {
        choice=printMenu();

        switch (choice) {
        case 1:
            addItem(&manager);
            break;
        case 2:
          /*  deleteItem(&manager);*/
            break;
        case 3:
           /* displaySingleItem(&manager);*/
            break;
        case 4:
            displayAllItems(&manager);
            break;
        case 5:
           /* saveDataToFile(&manager);*/
            break;
        case 0:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function to add a new item
void addItem(RecipeManager* manager) {
    if (manager->itemCount == MAX_RECIPES) {
        printf("Maximum number of items reached.\n");
        return;
    }

    ITEM* newItem = &manager->items[manager->itemCount];

    printf("Enter Recipe name: ");
    scanf(" %[^\n]%*c", newItem->recipe_name);

    printf("Enter ingredients ");
    scanf(" %[^\n]%*c", newItem->ingredients);

    printf("Enter instructions: ");
    scanf(" %[^\n]%*c", newItem->instructions);

    newItem->id = rand(); // Assign a random ID
    manager->itemCount++;

    printf("Item added successfully.\n");
}


//function to print Welcome menu
void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Recipe Manager **\n");
	printf_s(" **********************\n");
}

//function to read user input 
int printMenu() {
	printf_s("1. Add a new recipe \n");
	printf_s("2. Delete an existing  recipe\n");  
	printf_s("3. Display all  recipe\n");
	printf_s("4. Display single  recipe\n");
    printf_s("5. save accumulated data to disk\n");
	printf_s("0. Exit\n");

	int Choice;

	printf_s("Enter number: ");
	int numparse=scanf_s("%d", &Choice);
	inputCheck(numparse);
	return Choice;
}

//function to check for right user input  value
void inputCheck(int buff) {
	if (buff!=1) {
		fprintf(stderr, "Invalid input");
		exit(EXIT_FAILURE);
	}

}


// Function to display all items
void displayAllItems(const RecipeManager* manager) {
    if (manager->itemCount == 0) {
        printf("No items to display.\n");
        return;
    }

    for (int i = 0; i < manager->itemCount; i++) {
        printf("Item ID: %d\n", manager->items[i].id);
        printf("Recipe Name: %s\n", manager->items[i].recipe_name);
        printf("Ingredients: %s\n", manager->items[i].ingredients);
        printf("Instructions: %s\n", manager->items[i].instructions);
        printf("---------------------\n");
    }
}


