#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Compares the character input to a list
 * of allowed characters.
 * @author Whitney Holmes - 3502092
 * @param charInput a char value to compare
 * @returns 0 if illegal
 * @returns 1 if legal
 */
int isIllegalCharacter(char charInput) {
    int isIllegal = 0;

    //List of if statements of allowed characters

    //If uppercase
    if((int)charInput >= 65 && (int)charInput <= 90) {
        isIllegal = 1; //False
    }
    //If lowercase
    else if((int)charInput >=97 && (int)charInput <=122) {
        isIllegal = 1; //False
    }
    //If numeral
    else if((int)charInput >= 49 && (int)charInput <= 57) {
        isIllegal = 1; //False
    }

    //If '<'
    else if((int)charInput == 60) {
        isIllegal = 1; 
    }

    //If '>'
    else if((int)charInput == 62) {
        isIllegal = 1;
    }

    return isIllegal;
}