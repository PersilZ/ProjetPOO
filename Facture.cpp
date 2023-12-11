#include "Facture.h"
namespace NS_Site
{
    Facture::Facture() {
        RefFacture = "";
        CodePostal = 0;
        Adresse = "";
    }

    Facture::~Facture() {
        delete RefFacture;
        delete CodePostal;
        delete Adresse;
    }

    void Facture::setRefFacture(String^ x) {
        RefFacture = x;
    }

    void Facture::setCodePostal(int^ x) {
        CodePostal = x;
    }

    void Facture::setAdresse(String^ x) {
        Adresse = x;
    }

    String^ Facture::getRefFacture() {
        return RefFacture;
    }

    int^ Facture::getCodePostal() {
        return CodePostal;
    }

    String^ Facture::getAdresse() {
        return Adresse;
    }
}
