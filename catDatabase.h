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

#define MAX_NAME_LENGTH ( 50 )
#define MAX_CATS ( 1024 )

#include <stdbool.h>

enum gender{UNKNOWN_GENDER, MALE, FEMALE};
extern enum gender isGender;

enum breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
extern enum breed isBreed;

enum color{BLACK, WHITE, RED, BLUE, GREEN, PINK};
extern enum color collarColor1;
extern enum color collarColor2;

extern int currentNumberOfCats;

struct Cat {
    char name[MAX_NAME_LENGTH];
    bool isFixed;
    float weight;
    int gender;
    int breed;
    int color1;
    int color2;
    unsigned long long license;
};

extern struct Cat catsStruct[MAX_CATS];
