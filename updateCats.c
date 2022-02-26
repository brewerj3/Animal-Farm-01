///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file updateCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "updateCats.h"
#include "config.h"


int updateCatName( int index, char newName[] ){
   if(strlen(newName) == 0){ //Check if new name is empty
      exit(EXIT_FAILURE);
   }
   int indexSearch = 0;
   while( indexSearch != MAX_CATS ) { // Search for existing cat with same name as new name
       if((!strcmp(newName, catsStruct[indexSearch].name))){ //Check if a cat is already named newName
           fprintf( stderr, "%s: %s cannot be named %s: as %s is already named that at index %d \n", PROGRAM_NAME, catsStruct[index].name, newName, catsStruct[indexSearch].name, indexSearch);
           return 0;
       }
      indexSearch++;
   }
   strcpy(catsStruct[index].name, newName);
   return 0;
}

int fixCat( int index ){
    catsStruct[index].isFixed = true;
    return 0;
}

int updateCatWeight( int index, float newWeight ){
   if(newWeight <= 0){
      exit(EXIT_FAILURE);
   }
   else {
      catsStruct[index].weight = newWeight;
      return 0;
   }
}

