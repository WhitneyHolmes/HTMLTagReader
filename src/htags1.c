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
    char charArray[COLS]; 
    int index = 0; //Tag index
    int character; //Current character from stdin

    //Loops until EOF
    while((character = getchar()) != EOF && index < 100) {
        //If opening of tag
        if(character == '<') {
            int charIndex = 0; //Initialize the tag string index
            //Loops while the current character is a part of a tag and less than 10 chars long
            //character = getchar();
            while(charIndex < 9) {
                character = getchar();

                //Make sure it is a tag
                if(isIllegalCharacter(character) == 1) {
                    charArray[charIndex] = character; //Add character to current tag
                    charIndex++;
                }
                else {
                    charArray[charIndex+1] = '\0'; //Add end of string character
                    charIndex = 0; //Reset charIndex
                    tagArray[index] = &charArray[0]; //Add to tag list

                    //Once a tag is complete, increments tag index if it is unique
                    if(isDuplicate(&tagArray[0], index) == 1) {
                        index++; //Increments to the next tag index
                    }
                }
            }
        }

    }

    //Print the tags
    printf("The HTML tags used are:\n");

    for(int i = 0; i < index; i++) {
        for(int j = 0; j < (int)strlen(tagArray[i]); j++) {
            printf("%c\n", tagArray[i][j]);
        }
    }
    return 0;        
}
