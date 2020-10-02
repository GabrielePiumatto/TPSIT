#include <stdio.h>
#include <stdlib.h>

int main()
{
	// inizializzo tutte le vriabili necessarie e le differenzio a seconda se devono essere numeri decimali o meno

	float R;
	float x[50];
	int N, i, con;

	// chiedere in input i dati

	printf("Inserisci il numero di persone contagiate da una sola persona ogni giorno: ");
	scanf("%f", &R);

	printf("\nInserisci il numero di studenti nella classe: ");
	scanf("%d", &N);

	// inizializzare il primo numero dell'array come 1 dato che e' il primo contagiato

	x[0] = 1;

	// utilizzare il ciclo for per aumentare i giorni e il numero di persone contagiate e confrontare il numero massimo di contagiati

	for (i = 1, con = 1; con < N; i++)
	{
		x[i] = R * x[i - 1];                                                // calcolare il numero di contagiati
		con = x[i];                                                         // salvare il numero di contagiati in una variabile
		printf("\nIl numero di contagi al giorno %d e' %d", i, con);        // stampare il numero di contagiati giornalieri
	}

	// stampare il numero di giorni calcolati

	printf("\nIl numero di giorni necessario a contagiare %d persone e' : %d", N, i-1);

	return 0;
}
