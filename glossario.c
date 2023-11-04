#include <stdio.h>
#include <stdlib.h>


/*
int: Tipo di dati per numeri interi.
float: Tipo di dati per numeri in virgola mobile a precisione singola.
double: Tipo di dati per numeri in virgola mobile a doppia precisione.
char: Tipo di dati per singoli caratteri.
unsigned: Modificatore per dichiarare variabili senza segno.
const: Modificatore per dichiarare costanti.
typedef: Per creare alias per tipi di dati personalizzati.
sizeof: Operatore per ottenere la dimensione di un tipo di dati.
*/










// Dichiarazione della funzione che calcola la somma di un array di interi
int calcolaSomma(int array[], int dimensione) {
    int somma = 0;
    for (int i = 0; i < dimensione; i++) {
        somma += array[i];
    }
    return somma;
}

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int dimensioneArray = sizeof(myArray) / sizeof(myArray[0]);

    // Chiamata alla funzione per calcolare la somma dell'array
    int risultato = calcolaSomma(myArray, dimensioneArray);

    printf("La somma dell'array è %d\n", risultato);

    return 0;
}


































/*
Puntatori:
tipo *nome_puntatore;: Dichiarazione di un puntatore.
&variabile: Operatore per ottenere l'indirizzo di una variabile.
*puntatore: Operatore per accedere al valore puntato.
*/


// int main() {
//     int numero = 42;
//     int *puntatore;  // Dichiarazione di un puntatore a un intero
//     puntatore = &numero;  // Inizializzazione del puntatore con l'indirizzo di 'numero'

//     printf("Valore di numero: %d\n", numero);
//     printf("Indirizzo di numero: %p\n", &numero);
//     printf("Valore puntato da puntatore: %d\n", *puntatore);

//     return 0;
// }

// //



// int main() {
//     int number = 42;
//     int *puntatore = &number;

//     printf("Valore iniziale di numero: %d\n", number);
    
//     *puntatore = 100;  // Modifica il valore di numero attraverso il puntatore
    
//     printf("Nuovo valore di numero: %d\n", number);

//     return 0;
// }









// //



// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     int *puntatore = array;  // Il puntatore punta al primo elemento dell'array

//     printf("Elementi dell'array: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", *puntatore);
//         puntatore++;  // Avanza il puntatore per puntare all'elemento successivo
//     }
//     printf("\n");

//     return 0;
// }


/*Istruzioni di Controllo:

if (condizione) { ... }: Istruzione condizionale.
else { ... }: Ramo alternativo per l'istruzione if.
switch (espressione) { ... }: Istruzione di selezione multipla.
while (condizione) { ... }: Ciclo while.
for (inizializzazione; condizione; iterazione) { ... }: Ciclo for.
do { ... } while (condizione);: Ciclo do-while.*/


/*Operatori:

+, -, *, /, %: Operatori aritmetici.
==, !=, <, >, <=, >=: Operatori di confronto.
&&, ||, !: Operatori logici.
=, +=, -=: Operatori di assegnazione.
&, *: Operatori di riferimento e dereferenziazione dei puntatori
*/



int main() {
    int a = 5;
    int b = 5;

    if (a == b) {
        printf("Le variabili a e b sono uguali in valore.\n");
    } else {
        printf("Le variabili a e b non sono uguali in valore.\n");
    }

    return 0;
}




// /*

// Funzioni:

// tipo_restituito nome_funzione(parametri) { ... }: Dichiarazione di una funzione.
// void: Tipo di dati speciale per funzioni che non restituiscono un valore.
// return valore;: Istruzione per restituire un valore dalla funzione.
// nome_funzione(parametri);: Chiamata a una funzione.

// */

// /*

// Gestione della Memoria:

// malloc: La funzione malloc (memory allocation) è utilizzata per allocare dinamicamente un blocco di memoria di una dimensione specifica durante l'esecuzione del programma. Restituisce un puntatore a un blocco di memoria non inizializzata. È importante notare che la memoria allocata con malloc non viene inizializzata inizialmente, quindi il suo contenuto è indefinito.

// free: La funzione free è utilizzata per liberare la memoria precedentemente allocata con malloc. Liberare la memoria è importante per prevenire perdite di memoria (memory leaks) nel programma. Dopo aver utilizzato free, il puntatore diventa non valido e non deve essere utilizzato nuovamente.

// Esempio di utilizzo di malloc e free:

// */



int main() {
    int n = 5;  // Dimensione dell'array
    int *array;

    // Alloca dinamicamente un array di interi di dimensione 'n'
    array = (int *)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Allocazione di memoria fallita.\n");
        return 1;
    }

    // Inizializza l'array con valori
    for (int i = 0; i < n; i++) {
        array[i] = i * 10;
    }

    // Stampa i valori dell'array
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Libera la memoria allocata
    free(array);

    return 0;
}



/*

create a function 
that form the imput have a valiue and form the output have another valeue


 */







