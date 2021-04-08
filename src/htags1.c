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
int main(int argc, char * argv[])
{
    //Read from file
    FILE * filePointer;
    filePointer = fopen(argv[1], "r"); //Read file
    int character;

    //tagArray
    char tagArray[ROWS][COLS + 1]; //1 extra char for end of line character
    int tagIndex = 0;
    int charIndex = 0;
    int tag = 1; //flag

    //Loop until end of file character or tagIndex maxed
    while(character != EOF && character != -1 && tagIndex < ROWS) {
        //Loop through the tag, until illegal character encountered or charIndex maxed
        while(isIllegalCharacter(character = fgetc(filePointer)) == 1 && charIndex < COLS) {
                //If at the start of a tag
                //printf("character: %c\n", character);
                if(character == '<') {
                    tag = 1; //start of tag
                }

                //If in a tag
                if(tag == 1) {
                    tagArray[tagIndex][charIndex] = character;
                    //printf("\t\t\t\t%s\n", tagArray[tagIndex]);
                    charIndex++;
                }
                
                //If at the end of a tag
                if(character == '>') {
                    tag = 0; //end of a tag
                    break;
                }
        }
        //When readinging tags like <span ....>
        // character != '/' keeps charIndex from incrimenting for
        //the case when character = '/'
        if(tag == 1 && character != '/') {
            //printf("\t\ttag = %d\n", tag);
            tagArray[tagIndex][charIndex] = '>';
            charIndex++;
            tag = 0;
        }

        //If it is an end tag
        if(character == '/') { 
            //printf("\t\tchar = %c\n", character);
            tag = 0;
            clearTag(tagArray[tagIndex], charIndex);
        }

        //Check if full tag (not just ">")
        if(charIndex > 1 && tag == 0) {
            tagArray[tagIndex][charIndex] = '>';
            tagArray[tagIndex][charIndex] = '\0'; //End of string

            //Check if duplicate
            if(isDuplicate(&tagArray[0], tagIndex) == 1) { //Not duplicate
                //printf("Tag ' %s ' is added.\n\n", tagArray[tagIndex -1]);
                tagIndex++; //Increment to next tag
            }
            else {
                clearTag(tagArray[tagIndex], charIndex);
            }
            charIndex = 0;
        }
        charIndex = 0; //Reset charIndex
    }

    int i = 0;
    printf("The Tag List: \n");
    for(i; i < tagIndex; i++) {
        printf("%s\n", tagArray[i]);
    }

    fclose(filePointer);

    return EXIT_SUCCESS;
}   