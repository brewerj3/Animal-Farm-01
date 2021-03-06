###############################################################################
### University of Hawaii, College of Engineering
### @brief Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
###
### @file Makefile
### @version 1.0 - Initial version
###
### @author Joshua Brewer <brewerj3@hawaii.edu>
### @date 25_Feb_2022
###
### @see https://www.gnu.org/software/make/manual/make.html
###############################################################################
CC		 = gcc
CFLAGS = -g -Wall -Wextra

TARGET = animalFarm

all: $(TARGET)

catDatabase.o: catDatabase.h catDatabase.c config.h
		$(CC) $(CFLAGS) -c catDatabase.c

catValidation.o: catValidation.c catValidation.h
		$(CC) $(CFLAGS) -c catValidation.c

addCats.o: addCats.c addCats.h 
		$(CC) $(CFLAGS) -c addCats.c

deleteCats.o: deleteCats.c deleteCats.h
		$(CC) $(CFLAGS) -c deleteCats.c

reportCats.o: reportCats.c reportCats.h
		$(CC) $(CFLAGS) -c reportCats.c

updateCats.o: updateCats.c reportCats.h 
		$(CC) $(CFLAGS) -c updateCats.c

main.o: main.c  
		$(CC) $(CFLAGS) -c main.c

animalFarm: main.o addCats.o deleteCats.o reportCats.o updateCats.o catDatabase.o catValidation.o
		$(CC) $(CFLAGS) -o $(TARGET) main.o addCats.o deleteCats.o reportCats.o updateCats.o catDatabase.o catValidation.o

clean:
		rm -f $(TARGET) *.o
