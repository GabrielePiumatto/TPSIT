#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main()
{
    FILE *fp;
    char string[MAX];
    int cont=0;
    int t=0;
    int c=0;
    int a=0;
    int g=0;

    fp = fopen("rna.txt", "r");

    for(int i=0; i<strlen(string); i++)                     
    {
        if(string[i]=='t')
        {
            t++;
        }
        if(string[i]=='c')
        {
            c++;
        }
        if(string[i]=='a')
        {
            a++;
        }
        if(string[i]=='g')
        {
            g++;
        }
    }

    printf("Il numero di t : %d\n", t);
    printf("Il numero di c : %d\n", c);
    printf("Il numero di a : %d\n", a);
    printf("Il numero di g : %d\n", g);
    
    printf("Fine programma\n");
    
    fclose(fp);

    return 0;
}