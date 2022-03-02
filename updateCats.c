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
#include <stdlib.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "updateCats.h"
#include "config.h"
#include "catValidation.h"


int updateCatName( int index, char newName[] ) {
   if(strlen(newName) == 0){ //Check if new name is empty
      exit(EXIT_FAILURE);
   }
   int indexSearch = 0;
   while( indexSearch != MAX_CATS ) { // Search for existing cat with same name as new name
       catNameExists(indexSearch, newName);
       indexSearch++;
   }
   strcpy(catsStruct[index].name, newName);
   return 0;
}

int fixCat( int index ) {
    if(checkForEmptyName( index )) {//checks if the index is empty
        catsStruct[index].isFixed = true;
    }
    return 0;
}

int updateCatWeight( int index, float newWeight ) {
   if(newWeight <= 0){
      exit(EXIT_FAILURE);
   }
   if(checkForEmptyName( index )) {
      catsStruct[index].weight = newWeight;
      return 0;
   }
}

void updateCatCollar1( int index, enum color collarColor1 ){
    if(checkForEmptyName( index )) {
        catsStruct[index].color1 = collarColor1;
    }
}

void updateCatCollar2( int index, enum color collarColor2 ){
    if(checkForEmptyName( index )) {
        catsStruct[index].color2 = collarColor2;
    }
}

void updateLicense( int index, unsigned long long license ){
    if(checkForEmptyName( index )) {
        catsStruct[index].license = license;
    }
}