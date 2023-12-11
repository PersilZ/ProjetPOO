#pragma once
using namespace System;
namespace NS_Site
{
    ref class Facture
    {
    private:
        String^ RefFacture;
        int^ CodePostal;
        String^ Adresse;
    public:
        Facture();
        ~Facture();
        void setRefFacture(String^);
        void setCodePostal(int^);
        void setAdresse(String^);
        String^ getRefFacture();
        int^ getCodePostal();
        String^ getAdresse();
    };
}
