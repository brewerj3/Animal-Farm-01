///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file catValidation.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   25_Feb_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int catNameExists( const int index, char nameToCheckAgainst[] ) ;

extern int checkForEmptyName( const int index ) ;

extern bool isValidIndex( const int index ) ;

extern bool isValidWeight( const float checkWeight ) ;

extern bool isValidName(char nameToCheck[] ) ;