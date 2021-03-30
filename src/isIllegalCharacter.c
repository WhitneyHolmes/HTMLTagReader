#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Compares the character input to a list
 * of characters.
 * @author Whitney Holmes - 3502092
 * @param charInput a char value to compare
 * @returns 0 if there is a match
 * @returns 1 if there is no match
 */
int isIllegalCharacter(char charInput) {
    int isIllegal = 0;
    //If uppercase
    if((int)charInput >= 65 && (int)charInput <= 90) {
        isIllegal = 1; //false
    }
    //iF lowercase
    else if((int)charInput >=97 && (int)charInput <=122) {
        isIllegal = 1; //false
    }
    //If numeral
    else if((int)charInput >= 49 && (int)charInput <= 57) {
        isIllegal = 1; //false
    }
    
    return isIllegal;
}