#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

#define ROWS 100
/**
 * Scans from a pointer of an HTML file (from stdin)
 * until EOF. 
 * Adds tags to an array passed in.
 * Checks for an "<", and terminates the 
 * tag when a " ", "/", or ">" is encountered.
 * @author Whitney Holmes - 3502092
 */
int main()
{
    char * tagArray[ROWS]; //!!!!!!!!!!!!need different data type!!!!!!!!!
    int index = 0; //Tag index
    char character; //Current character from stdin

    //Loops until EOF
    while((character = getchar()) != EOF && index < 100) {
        //If opening of tag
        printf("first while index: %i\n", index);
        printf("character: %c\n\n", character);
        if(character == '<') {
            printf("In a tag\n");
            int charIndex = 0; //Initialize the tag string index
            //Loops while the current character is a part of a tag and less than 10 chars long
            while(isIllegalCharacter(character = getchar()) == 1 && charIndex < 10) {
                printf("2nd while char index: %i\n", charIndex);
                printf("character: %c\n\n", character);
                tagArray[charIndex] = character; //Add character to current tag
                charIndex++;
            }
        }
        //Once a tag is complete, increments tag index if it is unique
        if(isDuplicate(&tagArray[0], index) == 1) {
            printf("Checking for duplicates...\n");
            index++; //Increments to the next tag index
            &tagArray++; //Increments tagArray pointer
        }
    }
    return 0;        
}
