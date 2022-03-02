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

#include <string.h>

#include "catDatabase.h"
#include "config.h"

int catNameExists( int index, char nameToCheckAgainst[] ) {
    if((!strcmp( nameToCheckAgainst, catsStruct[index].name))){
        return 1;
    }
    else {
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