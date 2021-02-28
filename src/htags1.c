#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

#define ROWS 100
#define COLS 10
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
    char * charArray[COLS]; 
    int index = 0; //Tag index
    char character; //Current character from stdin

    //Loops until EOF
    while((character = getchar()) != EOF && index < 100) {
        //If opening of tag
        if(character == '<') {
            int charIndex = 0; //Initialize the tag string index
            //Loops while the current character is a part of a tag and less than 10 chars long
            while((isIllegalCharacter(character = getchar()) == 1) && charIndex < 10) {
                charArray[charIndex] = &character; //Add character to current tag
                charIndex++;
            }
        }
        //Once a tag is complete, increments tag index if it is unique
        if(isDuplicate(&charArray[0], &tagArray[0], index) == 1) {
            index++; //Increments to the next tag index
            tagArray[index] = charArray[0]; //Add new tag to tagArray;
        }
    }
    printf("The HTML tags used are:\n");

    for(int i = 0; i < index; i++) {
        printf("%s\n", tagArray[i]);
    }
    return 0;        
}
