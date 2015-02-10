#include "studente.h"

struct s_LLElement {
    studente s;
    struct s_LLElement * next;
};

typedef struct s_LLElement LLElement;
typedef LLElement * studenteLinkedList;

/*
 * Restituisce la lunghezza della lista.
 */
int size(studenteLinkedList list);


/*
 * Restituisce l'elemento alla posizione specificata.
 * La prima posizione è la 0.
 * Se non esiste alcun elemento alla posizione specificata, le stringhe nome e cognome
 * dell'elemento restituito hanno lunghezza zero.
 */
studente getElementAtPosition(studenteLinkedList list, int position);


/*
 * Inserisce un elemento alla posizione specificata.
 * La prima posizione è la 0.
 * Se la lista è lunga n, gli elementi presenti vanno da 0 a n-1. È possibile
 * comunque aggiungere in posizione n (inserimento in coda).
 * 
 * Restituisce il valore aggiornato del puntatore al primo elemento in caso di successo.
 * Restituice NULL in caso di errore nell'aggiunta dell'elemento.
 */
studenteLinkedList insertElementAtPosition(studenteLinkedList list, int position, studente e);


/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
studenteLinkedList empty(studenteLinkedList list);