#pragma once
#define MAXRECIPES 100
#define NAMELENGTH 50
#define MAXINGREDIENTS 15
#define MAXINSTRUCTIONS 10
typedef struct Recipe {
	char name[NAMELENGTH];
	char ingredients[MAXINGREDIENTS];
	char instructions[MAXINSTRUCTIONS];
}RECIPE;