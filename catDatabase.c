///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file catDatabase.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   @todo 25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
float weight[MAX_CATS];



int genderOfCat[MAX_CATS];

int breedOfCat[MAX_CATS];

int currentNumberOfCats=0;

char *name[MAX_CATS];

bool isFixed[MAX_CATS] = {false};

