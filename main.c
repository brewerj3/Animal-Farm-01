///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   @todo 14_Feb_2022
///////////////////////////////////////////////////////////////////////////////




#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "addCats.h"
#include "deleteCats.h"
#include "reportCats.h"
#include "updateCats.h"

int main(){
   printf( "Starting Animal Farm 0 \n" );
   
   addCat( "Loki",   MALE,           PERSIAN,    true,  8.5 );
   addCat( "Milo",   MALE,           MANX,       true,  7.0 );
   addCat( "Bella",  FEMALE,         MAINE_COON, true,  18.2 );
   addCat( "Kali",   FEMALE,         SHORTHAIR,  false, 9.2 );
   addCat( "Trin",   FEMALE,         MANX,       true,  12.2 );
   addCat( "Chili",  UNKNOWN_GENDER, SHORTHAIR,  false, 19.0 );
   addCat( "Tybalt", MALE,           SPHYNX,     true,  7.9 );

   printAllCats();

   int kali = findCats( "Kali" );
   updateCatName( kali, "Chili" ); //should fail
   printCat( kali );
   updateCatName( kali, "Capulet" );
   updateCatWeight( kali, 9.9 );
   fixCat( kali );
   printCat( kali );

   printAllCats();

   deleteAllCats();
   printAllCats();

   printf( "Done with Animal Farm 0 \n" );
}
