#include <iostream>
#include "Grafo.cpp"  

int main() {
    
    Grafo<std::string> grafo;

    
    grafo.aggiungiNodo("Francesco");
    grafo.aggiungiNodo("Vincenzo");
    grafo.aggiungiNodo("Antonio");
    grafo.aggiungiNodo("Dario");
    grafo.aggiungiNodo("Marco");

    
    grafo.aggiungiArco("Francesco", "Vincenzo", 8);
    grafo.aggiungiArco("Francesco", "Antonio", 5);
    grafo.aggiungiArco("Vincenzo", "Dario", 7);
    grafo.aggiungiArco("Antonio", "Marco", 6);
    grafo.aggiungiArco("Dario", "Francesco", 9);
    grafo.aggiungiArco("Marco", "Vincenzo", 4);

    
    grafo.stampa();

    std::cout << "\n--- Operazioni di Ricerca e Manipolazione ---\n";

    
    
    if (grafo.verificaNodo("Francesco")) {
        std::cout << "Verifica se esiste il nodo 'Francesco': Sì\n";
    } else {
        std::cout << "Verifica se esiste il nodo 'Francesco': No\n";
    }



    if (grafo.verificaNodo("Luca")) {
        std::cout << "Verifica se esiste il nodo 'Luca': Sì\n";
    } else {
        std::cout << "Verifica se esiste il nodo 'Luca': No\n";
    }

    
   
    if (grafo.verificaArco("Francesco", "Vincenzo")) {
        std::cout << "Verifica se esiste un arco tra 'Francesco' e 'Vincenzo': Sì\n";
    } else {
        std::cout << "Verifica se esiste un arco tra 'Francesco' e 'Vincenzo': No\n";
    }

   
    if (grafo.verificaArco("Francesco", "Marco")) {
        std::cout << "Verifica se esiste un arco tra 'Francesco' e 'Marco': Sì\n";
    } else {
        std::cout << "Verifica se esiste un arco tra 'Francesco' e 'Marco': No\n";
    }

    
    grafo.nodiAdiacenti("Francesco");
    grafo.nodiAdiacenti("Vincenzo");

    
    std::cout << "\nAggiungiamo un nuovo nodo 'Luigi' e un arco tra 'Luigi' e 'Francesco'...\n";
    grafo.aggiungiNodo("Luigi");
    grafo.aggiungiArco("Luigi", "Francesco", 3);

    
    grafo.stampa();

  
    std::cout << "\nRimuoviamo l'arco tra 'Francesco' e 'Vincenzo'...\n";
    grafo.rimuoviArco("Francesco", "Vincenzo");

    
    std::cout << "\nRimuoviamo il nodo 'Marco'...\n";
    grafo.rimuoviNodo("Marco");

    
    grafo.stampa();

    return 0;
}
