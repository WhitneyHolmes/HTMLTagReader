#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/**
 * Scans a .html file until EOF. 
 * Adds tags, formatted, to an array.
 * 
 * Checks for an '<', and terminates the 
 * tag when an illegal character, or 
 * special character '/', or '!' is the 
 * 2nd character. Terminates the tag when
 * a '>' is found.
 * 
 * Prints to stdout.
 * @author Whitney Holmes - 3502092
 */
int main(int argc, char * argv[])
{
    //Read from file
    FILE * filePointer;
    filePointer = fopen(argv[1], "r"); //Read file.
    int character;

    //tagArray
    char tagArray[ROWS][COLS + 1]; //1 extra char for end of line character.
    int tagIndex = 0;
    int charIndex = 0;
    int tag = 1; //Flag, 1: in a tag, 2: not in a tag.

    //Loop until end of file character or tagIndex maxed.
    while(character != EOF && character != -1 && tagIndex < ROWS) {

        //Loop through the tag, until illegal character encountered or charIndex maxed.
        while(isIllegalCharacter(character = fgetc(filePointer)) == 1 && charIndex < COLS) {
                
                //If at the start of a tag.
                if(character == '<') {
                    tag = 1; //Start of tag.
                }

                //If in a tag.
                if(tag == 1) {
                    tagArray[tagIndex][charIndex] = character;
                    charIndex++;
                }
                
                //If at the end of a tag.
                if(character == '>') {
                    tag = 0; //End of a tag.
                    break;
                }
        }
        
        /**
         * When readinging tags like <span ....>.
         * -->Character != '/' keeps charIndex from incrimenting for
         * the case when character = '/'.
        */
        if(tag == 1 && character != '/' && character != '!') {
            tagArray[tagIndex][charIndex] = '>';
            charIndex++;
            tag = 0;
        }

        //If it is an end tag or something like <!DOCTYPE>.
        if(character == '/' || character == '!') { 
            tag = 0;
            clearTag(tagArray[tagIndex], charIndex);
        }

        //Check if full tag (not just ">").
        if(charIndex > 1 && tag == 0) {
            tagArray[tagIndex][charIndex] = '>';
            tagArray[tagIndex][charIndex] = '\0'; //End of string.

            //Check if duplicate
            if(isDuplicate(&tagArray[0], tagIndex) == 1) { //Not duplicate.
                tagIndex++; //Increment to next tag.
            }
            else {
                clearTag(tagArray[tagIndex], charIndex);
            }
        }
        charIndex = 0; //Reset charIndex.
    }

    //Print the complete list.
    int i = 0;
    printf("The Tag List: \n");
    for(i; i < tagIndex; i++) {
        printf("%s\n", tagArray[i]);
    }

    fclose(filePointer);

    return EXIT_SUCCESS;
}   