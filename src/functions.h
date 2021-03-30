#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define COLS 10

int isIllegalCharacter(char charInput);

int isDuplicate(char tagArray[][COLS +1], int numberOfTags);

int clearTag(char ** tag, int length);

int tagCmp(char tag1[][COLS + 1], char tag2[][COLS + 1]);

//void printArray(char ** tagArray, int arrayLength);

#endif