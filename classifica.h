//
// Claudio Falchi 4AI - 24/09/2024
//

#ifndef FALCHI_LA_CLASSIFICA_CLASSIFICA_H
#define FALCHI_LA_CLASSIFICA_CLASSIFICA_H

#include <string>   //Implementazione delle stringhe
#include <iostream>
using namespace std;

struct Giocatore {
    string nome;
    int punteggio;
};

void visualizza_classifica(Giocatore classifica[], int numGiocatori);
void inserire_nuovo_punteggio(Giocatore classifica [], int& numGiocatori);

#endif //FALCHI_LA_CLASSIFICA_CLASSIFICA_H
