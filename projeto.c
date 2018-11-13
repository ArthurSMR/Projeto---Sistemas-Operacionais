#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int total=0;
    int numeros[1000];
    FILE *f;
    f = fopen(argv[1], "r");
    /*printf("%d\n", argc);
    for(int i=0;i<argc;i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    } */

    while(!feof(f)){
        fscanf(f, "%d", &numeros[total]);
        total++;
    }
    
    return 0;
}