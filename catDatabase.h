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

#pragma once

#define MAX_NAME_LENGTH ( 50 )
#define MAX_CATS ( 1024 )

#include <stdbool.h>

enum Gender{UNKNOWN_GENDER, MALE, FEMALE};

enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK};

extern int currentNumberOfCats;

typedef float Weight;

struct Cat {
    char name[MAX_NAME_LENGTH];
    bool isFixed;
    Weight weight;
    int gender;
    int breed;
    int color1;
    int color2;
    unsigned long long license;
};

extern struct Cat catsStruct[MAX_CATS];