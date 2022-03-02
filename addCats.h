///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int addCat( char nameToAdd[],
                   enum gender isGender,
                   enum breed isBreed,
                   bool isFixedNew,
                   float weightNew,
                   enum color collarColor1,
                   enum color collarColor2,
                   unsigned long long license ) ;