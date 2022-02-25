///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#define MAX_NAME_LENGTH ( 30 )
#define MAX_CATS ( 1024 )

#include <stdbool.h>

extern char *name[MAX_CATS];

extern enum gender{UNKNOWN_GENDER, MALE, FEMALE}isGender;

extern int genderOfCat[MAX_CATS];

extern enum breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX}isBreed;

extern int breedOfCat[MAX_CATS];

extern bool isFixed[MAX_CATS];

extern float weight[MAX_CATS];

extern int currentNumberOfCats;

extern struct Cat cat;