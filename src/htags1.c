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
    char tagArray[ROWS][COLS + 1]; //1 extra char for end of line character
    char character = getchar();
    int tagIndex = 0;
    int charIndex = 0;
    char eol = '\0';

    //Loop until end of file character or tagIndex maxed
    while(character != EOF && tagIndex < ROWS) {
        if(character == '<') { //Opening of a tag
            character = getchar();
            if(character != '/') { //End tag -- Eliminates looping on end tags

                //Loop through the tag, until illegal character encountered or charIndex maxed
                while(isIllegalCharacter(character) == 1 && charIndex < COLS) {
                    tagArray[tagIndex][charIndex] = character;
                    printf("\nCharacter in while loop: %c, charIndex: %d, tagIndex: %d\n", character, charIndex, tagIndex);
                    charIndex++;
                    character = getchar();
                }
                tagArray[tagIndex][charIndex] = '\0'; //End of string
                charIndex = 0; //Reset charIndex
                //printf("Tag ' %s ' is in question.\n\n", tagArray[tagIndex -1]);
                //Check if already on the list
                if(isDuplicate(&tagArray[0], tagIndex) == 1) { //Not duplicate
                    //printf("Tag ' %s ' is added.\n\n", tagArray[tagIndex -1]);
                    tagIndex++; //Increment to next tag
                /*! 
                    isDuplicate is being called for each character
                */
                }
            }
        }
        character = getchar();
    }

    int i = 0;
    printf("The Tag List: \n");
    for(i; i < tagIndex; i++) {
        printf("%s\n", tagArray[i]);
    }
}   