///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file catValidation.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>

#inlcude "catDatabase.h"
#include "config.h"

int catNameEquality(int index, char nameToCheckAgainst[] ) {
    if(nameToCheckAgainst == catsStruct[index].name){
        return 1;
    }
    else {
        return 0;
    }
}

int checkForEmptyName(int index, char nameToCheckAgainst[] ) {
    if(catsStruct[index].name)
}