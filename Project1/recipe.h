#pragma once
#define MAX_RECIPES 100
#define NAMELENGTH 50
#define MAX_INGREDIENTS 150
#define MAX_INSTRUCTIONS 1000
typedef struct {
    int id;
    char recipe_name[NAMELENGTH];
    char ingredients[MAX_INGREDIENTS];
    char instructions[MAX_INSTRUCTIONS];
} ITEM;

typedef struct {
    ITEM items[MAX_RECIPES];
    int itemCount;
} RecipeManager;
