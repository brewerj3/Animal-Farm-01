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
#include <stdbool.h>
#include <stdio.h>

#include "catDatabase.h"
#include "config.h"

bool catNameExists( const int index, char nameToCheckAgainst[] ) {
    if((!strcmp( nameToCheckAgainst, catsStruct[index].name))){
        return true;
    }
    else {
        return false;
    }
}

int checkForEmptyName( const int index ) {
    if(catsStruct[index].name[0] == '\0'){
        return 0;
    }
    else {
        return 1;
    }
}

bool isValidIndex( const int index ) {
    if(index < 0){
        fprintf( stderr, "%s: %d is too small, it must be greater than or equal to %d \n", PROGRAM_NAME, index, MAX_CATS);
        return false;
    }
    if(index > MAX_CATS){
        fprintf( stderr, "%s: %d is too large, it must be less than or equal to %d \n ", PROGRAM_NAME, index, MAX_CATS);
        return false;
    }
    else{
        return true;
    }
}

bool isValidWeight( const Weight checkWeight ) {
    if(checkWeight <= 0){
        fprintf( stderr, "%s: cats cat have negative mass, that would break physics. \n", PROGRAM_NAME );
        return false;
    }
    else {
        return true;
    }
}

bool isValidName(char nameToCheck[] ) {
    int nameLength = strlen(nameToCheck);
    if( nameLength <= 0 ) {
        fprintf( stderr, "%s: length of name is: %d which is less than or equal to 0 therefore it is invalid. \n", PROGRAM_NAME, nameLength);
        return false;
    }
    if( nameLength > MAX_NAME_LENGTH ) {
        fprintf( stderr, "%s name length is: %d is longer than Maximum name length allowed which is %d \n", PROGRAM_NAME, nameLength, MAX_NAME_LENGTH);
        return false;
    }
    else{
        return true;
    }
}