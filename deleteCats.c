///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "catDatabase.h"
#include "deleteCats.h"
#include "config.h"

void deleteAllCats(){
   printf("Deleting all cats. \n");
   currentNumberOfCats = 0;
   int index = 0;
   while((catsStruct.name[index] != NULL) && (index < MAX_CATS)){
       catsStruct.name[index][0] = '\0';
       catsStruct.isFixed[index] = false;
       catsStruct.gender[index] = 0;
       catsStruct.breed[index] = 0;
       catsStruct.weight[index] = 0;
       index++;
   }
}



