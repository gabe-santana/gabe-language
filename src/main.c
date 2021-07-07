#include "include/gab.h"
#include "include/macros.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        printf("Unspecified input file");
        return 1;
    }
    return 0;
}