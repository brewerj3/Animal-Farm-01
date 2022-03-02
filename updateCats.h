///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int updateCatName( int index, char newName[] );

extern int fixCat( int index );

extern int updateCatWeight( int index, float newWeight );

void updateCatCollar1( int index, enum color collarColor1 );

void updateCatCollar2( int index, enum color collarColor2 );

void updateLicense( int index, unsigned long long license );