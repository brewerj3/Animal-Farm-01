///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file addCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "addCats.h"
#include "config.h"

int addCat( char nameToAdd[MAX_NAME_LENGTH], enum gender isGender, enum breed isBreed, bool isFixedNew, float weightNew ){
    int index = 0;
    if(currentNumberOfCats >= MAX_CATS){
        fprintf( stderr, "%s: CurrentNumberOfCats exceeds maximum allowed cats in database.\n", PROGRAM_NAME);
        return 0;
    }

    int lengthOfString = strlen(nameToAdd);

    if(weightNew <= 0){
        fprintf( stderr, "%s: New weight(which is %f) is less than or equal to 0 \n",PROGRAM_NAME, weightNew);
        return 0;
    }
    if(lengthOfString <= 0){
        fprintf( stderr, "%s: Length of string equals 0\n",PROGRAM_NAME);
        return 0;
    }
    else if(lengthOfString > MAX_NAME_LENGTH){
        fprintf( stderr, "%s: Length of string is greater than max name length\n", PROGRAM_NAME);
        return 0;
    }
    else {
        index=0;
        while((nameToAdd != cat[index].name) && (MAX_CATS != index)) { //looking to see if name already exists
            if(nameToAdd == name[index]) {
                fprintf( stderr, "%s: Name already exists\n", PROGRAM_NAME);//print if name of cat already exists
                return 0;
            }
            index++;
        }
        index = 0; //reset index to look for empty location.
        while((name[index] != NULL) && (MAX_CATS > index)){ //searching for first empty spot
            index++;
        }
        strcpy(cat[index].name, nameToAdd);
        genderOfCat[index] = isGender;
        breedOfCat[index] = isBreed;
        isFixed[index] = isFixedNew;
        weight[index] = weightNew;
        currentNumberOfCats++;
        return index;
    }
}

