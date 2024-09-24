//
// Claudio Falchi 4AI - 24/09/2024
//

#include <iostream>
#include "classifica.h"

using namespace std;

int main() {
    Giocatore classifica[10];  // Array di massimo 10 giocatori
    int numGiocatori = 0;  // Numero di giocatori inizialmente presenti nella classifica

    int scelta;     // Variabile di scelta opzione del menù testuale
    do {
        cout << " " << endl;    // Menù testuale
        cout << "MENU':" << endl;
        cout << "Scegli tra una delle seguenti opzioni:"<<endl;
        cout << "1) Visualizza classifica" << endl;
        cout << "2) Inserisci nuovo punteggio" << endl;
        cout << "3) Esci" << endl;
        cin >> scelta;

        switch (scelta) {
            case 1:
                visualizza_classifica(classifica, numGiocatori);
                break;
            case 2:
                inserire_nuovo_punteggio(classifica, numGiocatori);
                break;
            case 3:
                cout << "Uscita dal programma" << endl;
                break;
            default:
                cout << "Errore. Riprova." << endl;
        }
    } while (scelta != 3);

    return 0;
}
