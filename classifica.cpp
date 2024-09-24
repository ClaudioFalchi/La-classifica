//
// Claudio Falchi 4AI - 24/09/2024
//

#include <iostream>
#include "classifica.h"
using namespace std;

// Funzione per visualizzare la classifica
void visualizza_classifica(Giocatore classifica[], int numGiocatori) {
    if (numGiocatori == 0) {
        cout << "----------------------------------" << endl;
        cout << "ATTENZIONE: la classifica e' vuota" << endl;
        cout << "----------------------------------" << endl;
        return;
    }
    cout<<" "<<endl;
    cout << "--------------------------------------------" << endl;
    cout << "Classifica dei migliori giocatori di Tetris:" << endl;
    for (int i = 0; i < numGiocatori; ++i) {
        cout << i + 1 << ". " << classifica[i].nome << " --> " << classifica[i].punteggio << " punti" << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout<<" "<<endl;
}

// Funzione per inserire un nuovo punteggio nella classifica
void inserire_nuovo_punteggio(Giocatore classifica[], int& numGiocatori) {
    Giocatore nuovoGiocatore;

    cout<<"Inserisci il nome del giocatore: ";
    cin>>nuovoGiocatore.nome;
    cout<<"Inserisci il punteggio del giocatore: ";
    cin>>nuovoGiocatore.punteggio;

    // Verifica se ci sono meno di 10 giocatori in classifica
    if (numGiocatori < 10) {
        classifica[numGiocatori] = nuovoGiocatore;
        numGiocatori++;
    }
        // Se la classifica è piena controllo se il nuovo punteggio è sufficiente
    else if (nuovoGiocatore.punteggio > classifica[9].punteggio) {
        classifica[9] = nuovoGiocatore;
    }
    else {
        cout << "Il punteggio non e' sufficiente per entrare nella classifica" << endl;
        return;
    }

    // Bubble Sort della classifica per punteggio
    for (int i = 0; i < numGiocatori - 1; ++i) {
        for (int j = 0; j < numGiocatori - i - 1; ++j) {
            if (classifica[j].punteggio < classifica[j + 1].punteggio) {
                Giocatore temp = classifica[j];
                classifica[j] = classifica[j + 1];
                classifica[j + 1] = temp;
            }
        }
    }

    cout << "Nuovo punteggio inserito!" << endl;
}