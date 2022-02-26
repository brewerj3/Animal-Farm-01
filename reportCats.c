///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file reportCats.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "catDatabase.h"
#include "reportCats.h"
#include "config.h"

int printCat( int index ) {
   if( ( catsStruct[index].name[0] != '\0'  ) || (index < 0) || (index > MAX_CATS) ){
      printf("animalFarm0: Bad cat [%d] \n",index);
      return 0;
   }
   else {
      printf("cat index = [%u] name = [%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%4.4f] \n", index, catsStruct[index].name, catsStruct[index].gender, catsStruct[index].breed, catsStruct[index].isFixed, catsStruct[index].weight);
   }
   return 0;
}

int printAllCats(void){
   int index = 0;
   if(currentNumberOfCats == 0){
      fprintf( stderr, "%s: There are no cats in this database \n", PROGRAM_NAME);
   }
   while( ( catsStruct[index].name[0] != '\0'  )  && (index < MAX_CATS) ){
      printf("cat index = [%u] name = [%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f] \n", index, catsStruct[index].name, catsStruct[index].gender, catsStruct[index].breed, catsStruct[index].isFixed, catsStruct[index].weight);
      index++;
   }
   return 0;
}

int findCats( char nameToFind[] ){
   int index = 0;
   printf("Looking for %s's Index \n", nameToFind);
   while(index != MAX_CATS){
       //printf("is %s the same name as %s? \n", nameToFind, catsStruct.name[index]); //@TODO remove later
       if((!strcmp(nameToFind, catsStruct[index].name))){
           return index;
       }
      index++;
   }
   if(index == MAX_CATS){
       fprintf( stderr, "%s: Reached the max number of cats and did not find cat.", PROGRAM_NAME);
      exit(EXIT_FAILURE);
   }
   else {
      return index;
   }
}

