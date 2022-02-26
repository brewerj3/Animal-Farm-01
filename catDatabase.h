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

extern enum gender{UNKNOWN_GENDER, MALE, FEMALE}isGender;

extern enum breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX}isBreed;

extern int currentNumberOfCats;

struct Cat {
    char name[MAX_NAME_LENGTH];
    bool isFixed;
    float weight;
    int gender;
    int breed;
};

extern struct Cat catsStruct[MAX_CATS];
