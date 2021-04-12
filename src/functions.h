#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define COLS 20
#define ROWS 20

int isIllegalCharacter(char charInput);

int isDuplicate(char ** tagArray, int numberOfTags);

char * clearTag(char * tag);

char ** createTagArray(int rows, int cols);

int clearTagArray(char ** tagArray, int tagIndex);

char ** extendArray(char ** tagArray, int length);
#endif