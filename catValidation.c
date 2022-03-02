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

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#inlcude "catDatabase.h"
#include "config.h"

int catNameExists( int index, char nameToCheckAgainst[] ) {
    if((!strcmp( nameToCheckAgainst, catsStruct[index].name))){
        return 1;
    }
    else {
        fprintf(stderr, "%s: %s is already named that at %i \n", PROGRAM_NAME, nameToCheckAgainst, index);
        return 0;
    }
}

int checkForEmptyName( int index ) {
    if(catsStruct[index].name[0] == '\0'){
        return 0;
    }
    else {
        return 1;
    }
}