/*GABRIELE PIUMATTO*/

#include <stdio.h>      //Dichiaro le librerie
#include <string.h>

#define MAX 100         //Dichiaro fuori dal main un array di numeri

int main()
{
    char string[MAX];   //Dichiaro un array di stringhe;
    int cont=0;         //Dichiaro un contatore intero;
    int risp=0;         //Dichiaro una variabile intera;

    printf("Benvenuto nel programma!\nScegli tra : \n 1. Codifica \n 2. Decodifica \n 3. Uscire\n La tua risposta : ");     //Faccio scegliere un'opzione;
    scanf("%d", &risp);

    while(risp!=3)      //Apro un ciclo while che viene terminato se risp è uguale a 3;
    {
        if(risp == 1)   //Apro un if per l'opzione 1;
        {
            printf("\nInserisci una stringa da codificare : ");     //Faccio inserire una stringa;
            scanf("%s", string);

            for(int i=0; i<strlen(string); i++)                     //Creo un ciclo for per la codifica;
            {
                if(string[i] == string[i+1])                        //Apro un if per contare le lettere uguali;
                {
                    cont++;                                         //Aggiorno il contatore;
                }
        
                else if(string[i]!=string[i+1] || string[i+1]== '\0')   //Apro un altro if per contare le altre lettere uguali;
                {
                    cont++;
                    printf("%d%c", cont, string[i]);                //Stampo il numero di ogni lettera uguale presente nella stringa;
                    cont=0;
                }
            }

            printf("\nScegli tra : \n 1. Codifica \n 2. Decodifica \n 3. Uscire\n La tua risposta : "); //Ripropongo la scelta di un opzione;
            scanf("%d", &risp);
        }

        else if(risp == 2)      //Apro un if per l'opzione 2;
        {
            printf("Ci scusiamo ma questa parte del programma non e' ancora stata sviluppata");     //Non sono riuscito a sviluppare questa parte

            printf("\nScegli tra : \n 1. Codifica \n 2. Decodifica \n 3. Uscire\n La tua risposta : "); //Ripropongo la scelta di un opzione;
            scanf("%d", &risp);
        }

        else if(risp < 1 || risp > 3)   //Apro un if per gestire l'input di un numero non accettabile;
        {
            printf("Errore!\nScrivi una delle scelte disponibili");                                     //Scrivo un messaggio di errore;
            printf("\nScegli tra : \n 1. Codifica \n 2. Decodifica \n 3. Uscire\n La tua risposta : "); //Ripropongo la scelta di un opzione;
            scanf("%d", &risp);
        }
    }

    printf("Sei uscito dal programma.\nA presto!");     //Scrivo un messaggio di fine programma;

    return 0;            //Fine programma;
}