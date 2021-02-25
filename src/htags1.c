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
int main(int argc)
{
    if(argc > 1) {
        char * tagArray[ROWS];
        int index = 0; //Tag index
        char character; //Current character from stdin

        //Loops until EOF
        while((character = getChar()) != EOF && index < 100) {
            //If opening of tag
            if(character == '<') {
                int charIndex = 0; //Initialize the tag string index
                //Loops while the current character is a part of a tag and less than 10 chars long
                while(isIllegalCharacter(character = getchar()) == 1 && charIndex < 10) {
                    tagArray[index][charIndex] = character; //Add character to current tag
                    charIndex++;
                }
            }
            //Once a tag is complete, increments tag index if it is unique
            if(isDuplicate(&tagArray[0], index) == 1) {
                index++; //Increments to the next tag index
            }
        }
        return 0;        
    }
    return 1;
}
