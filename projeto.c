#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    /*printf("%d\n", argc);
    for(int i=0;i<argc;i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    } */

    FILE *f;
    f = fopen(argv[1], "r");
    while(!feof(f)){
        
    }
}