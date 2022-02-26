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
       //printf("index search is: %d name is %s \n", indexSearch, catsStruct[indexSearch].name); // @TODO remove before final
       if((!strcmp(newName, catsStruct[index].name))){
           fprintf( stderr, "%s: %s cannot also be named %s: as %s is already named that at index %d \n", PROGRAM_NAME, catsStruct[index].name, newName, catsStruct[indexSearch].name, indexSearch);
           return 0;
       }
      indexSearch++;
   }
   if(newName == catsStruct[indexSearch].name){ //@TODO remove before final
      fprintf( stderr, "%s: %s already exists at index location: %d \n", PROGRAM_NAME, newName, indexSearch);
      return 0;
   }
   else {
       strcpy(catsStruct[index].name, newName);
      return 0;
   }
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

