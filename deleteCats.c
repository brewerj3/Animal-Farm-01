///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include "catDatabase.h"
#include "deleteCats.h"
void deleteAllCats(){
   printf("Deleting all cats. \n");
   currentNumberOfCats = 0;
   int index = 0;
   while((name[index] != NULL) && (index < MAX_CATS)){
      name[index] = NULL;
      genderOfCat[index] = 0;
      breedOfCat[index] = 0;
      isFixed[index] = false;
      weight[index] = 0;
      index++;
   }
}



