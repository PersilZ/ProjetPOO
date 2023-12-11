#include "Client.h"

namespace NS_Site
{
    Client::Client() {
        nom = "";
        prenom = "";
        email = "";
        CleCesar = "";
        MDP = "";
        DateNais = "";
    }
    Client::~Client() {
        delete nom;
        delete prenom;
        delete email;
        delete CleCesar;
        delete MDP;
        delete DateNais;
    }
    void Client::setNom(String^ x) {
        nom = x;
    }
    void Client::setPrenom(String^ x) {
        prenom = x;
    }
    void Client::setDateNais(String^ x) {
        DateNais = x;
    }
    void Client::setEmail(String^ x) {
        email = x;
    }
    void Client::setMDP(String^ x) {
        MDP = x;
    }
    void Client::Cryptage() {

    }
    void Client::Decryptage() {

    }
    String^ Client::getNom() {
        return nom;
    }
    String^ Client::getEmail() {
        return email;
    }
    String^ Client::getDateNais() {
        return DateNais;
    }
    String^ Client::getPrenom() {
        return prenom;
    }
    String^ Client::getMDP() {
        return MDP;
    }
}
