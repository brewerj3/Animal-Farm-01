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
   if(strlen(newName) == 0){
      exit(EXIT_FAILURE);
   }
   int indexSearch = 0;
   while((newName != name[indexSearch]) && (indexSearch != MAX_CATS)) {
      //printf("index search is: %d name is%s \n", indexSearch, name[indexSearch]);
      indexSearch++;
   }
   if(newName == name[indexSearch]){
      printf("%s already exists at index location: %d \n", newName, indexSearch);
      return 0;
   }
   else {
      name[index] = newName;
      return 0;
   }
}

int fixCat( int index ){
   isFixed[index] = true;
   return 0;
}

int updateCatWeight( int index, float newWeight ){
   if(newWeight <= 0){
      exit(EXIT_FAILURE);
   }
   else {
      weight[index] = newWeight;
      return 0;
   }
}

