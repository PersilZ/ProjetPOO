#pragma once
#include "Article.h"
using namespace System;
namespace NS_Site
{
    ref class Commande
    {
    private:
        int^ RefCommande;
        float PrixTot;
        System::Collections::Generic::List<Article^>^ Liste;//Liste d'articles
    public:
        Commande();
        ~Commande();
        void setRefCommande(int^);
        int^ getRefCommande();
        void setPrixTot(int, int);
        int getPrixTot();
    };
}
