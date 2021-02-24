#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define ROWS 100

int main(int argc, char const * argv[])
{
    if(argc > 1) {
        char * tagArray[ROWS];
        getHTMLTags(&argv[1], &tagArray[0]);
        return 0;        
    }
}
