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
   while( ( !strcmp(catsStruct[index].name, NULL  ) ) && (index < MAX_CATS)){
       catsStruct[index].name = NULL;
       catsStruct[index].isFixed = false;
       catsStruct[index].gender = 0;
       catsStruct[index].breed = 0;
       catsStruct[index].weight = 0;
       index++;
   }
}



