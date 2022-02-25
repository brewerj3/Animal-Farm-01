///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file reportCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
#include <stdio.h>
#include <stdlib.h>
#include "reportCats.h"
#include <string.h>

int printCat( int index ) {
   if( (name[index] == NULL) || (index < 0) || (index > MAX_CATS)){
      printf("animalFarm0: Bad cat [%d] \n",index);
      return 0;
   }
   else {
      printf("cat index = [%u] name = [%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%4.4f] \n", index, name[index], genderOfCat[index], breedOfCat[index], isFixed[index], weight[index]);
   }
   return 0;
}

int printAllCats(void){
   int index = 0;
   if(currentNumberOfCats == 0){
      printf("There are no cats in this database \n");
   }
   while((name[index] != NULL) && (index < MAX_CATS)){
      printf("cat index = [%u] name = [%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f] \n", index, name[index], genderOfCat[index], breedOfCat[index], isFixed[index], weight[index]);
      index++;
   }
   return 0;
}

int findCats( const char nameToFind[] ){
   int index = 0;
   printf("Looking for %s's Index \n", nameToFind);
   while(nameToFind[0] != *name[index] && index != MAX_CATS){
      index++;
   }
   if(index == MAX_CATS){
      exit(EXIT_FAILURE);
   }
   else {
      return index;
   }
}

