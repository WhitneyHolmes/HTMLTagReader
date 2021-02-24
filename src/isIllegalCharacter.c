#include <stdio.h>
#include <stdlib.h>

/**
 * Compares the character input to a list
 * of characters.
 * @author Whitney Holmes - 3502092
 * @param charInput a char value to compare
 * @returns 0 if there is a match
 * @returns 1 if there is no match
 */
int isIllegalCharacter(char charInput) {
    //List to compare to
    char illegalCharacters[] = {' ', '/', '>'};

    //Loops through the list
    for(int index = 0; index < 3; index++) {
        
        if(charInput == illegalCharacters[index])
            return 0; //Match
        else
            return 1; //No Match
    }
}