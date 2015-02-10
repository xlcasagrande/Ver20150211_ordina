#define NOME_MAXLEN 30

struct s_studente {
    char nome[NOME_MAXLEN+1];       // Needs one more char to store the string terminator
    char cognome[NOME_MAXLEN+1];    // Needs one more char to store the string terminator
};

typedef struct s_studente studente;