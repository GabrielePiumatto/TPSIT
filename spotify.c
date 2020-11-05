#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define NSONG 1000
#define BSIZE 1000

typedef struct SCanzone{
	int numero;
	char titolo[MAX];
	char artista[MAX];
}Canzone;

Canzone playlist[NSONG];

int main()
{
    FILE* fileptr;
    char riga[BSIZE];
    int counter = 0;

    fileptr = fopen("lettura.csv", "r");

    if(fileptr == NULL)
    {
        printf("Errore file!");
    }

    else
    {
        while(fgets(riga, BSIZE, f))
	{
		    field=strtok(riga,",");
		    canzoni[counter].numero=atoi(field);
		    field=strtok(NULL, ",");
		    canzoni[counter].titolo=strdup(field);
		    field=strtok(NULL, ",");
		    canzoni[counter].artista=strdup(field);

		    counter++;
	}
    }
    
    fclose(fileptr);

    return 0;
}
