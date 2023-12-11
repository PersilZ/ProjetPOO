#include "Commande.h"
#include <iostream>

namespace NS_Site
{
    Commande::Commande() {
        RefCommande = 0;
        PrixTot = PrixTot;
        Liste = gcnew System::Collections::Generic::List<Article^>();
    }
    Commande::~Commande() {
        delete RefCommande;
    }
    void Commande::setRefCommande(int^ x) {
        RefCommande = x;
    }
    void Commande::setPrixTot(int x, int y) {
        PrixTot = PrixTot + x*y;
        std::cout << PrixTot << std::endl;
    }
    int^ Commande::getRefCommande() {
        return RefCommande;
    }
    int Commande::getPrixTot() {
        return PrixTot;
    }
}
