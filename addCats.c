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

int addCat( char nameToAdd[], enum gender isGender, enum breed isBreed, bool isFixedNew, float weightNew ){

    if(currentNumberOfCats >= MAX_CATS){
        fprintf( stderr, "%s: CurrentNumberOfCats exceeds maximum allowed cats in database.\n", PROGRAM_NAME);
        return 0;
    }

    int lengthOfString = strlen(nameToAdd);

    if(lengthOfString <= 0){
        fprintf( stderr, "%s: Length of string equals 0\n",PROGRAM_NAME);
        return 0;
    }
    else if(lengthOfString > MAX_NAME_LENGTH){
        fprintf( stderr, "%s: Length of string is greater than max name length\n", PROGRAM_NAME);
        return 0;
    }
    else if(weightNew <= 0){
        fprintf( stderr, "%s: New weight(which is %f) is less than or equal to 0 \n",PROGRAM_NAME, weightNew);
        return 0;
    }
    else {
        int index = 0;
        while(MAX_CATS != index) { //looking to see if name already exists
            if(nameToAdd == catsStruct[index].name) {
                fprintf( stderr, "%s: Name already exists\n", PROGRAM_NAME);//print if name of cat already exists
                return 0;
            }
            index++;
        }
        index = 0; //reset index to look for empty location.
        while(( catsStruct[index].name[0] != '\0' ) && (MAX_CATS > index)){ //searching for first empty spot
            index++;
        }
        printf("attempting to add new name %s to index: %i\n", catsStruct[index].name, index ); //@TODO remove before final
        strcpy(catsStruct[index].name, nameToAdd);
        catsStruct[index].isFixed = isFixedNew;
        catsStruct[index].gender = isGender;
        catsStruct[index].breed = isBreed;
        catsStruct[index].weight = weightNew;
        currentNumberOfCats++;
        return index;
    }
}

