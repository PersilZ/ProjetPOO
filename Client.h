#pragma once
using namespace System;
namespace NS_Site
{
    ref class Client
    {
    private:
        String^ DateNais;
        String^ MDP;
        String^ CleCesar;
    protected:
        String^ nom;
        String^ prenom;
        String^ email;
    public:
        Client();
        ~Client();
        void setNom(String^);
        void setPrenom(String^);
        void setDateNais(String^);
        void setEmail(String^);
        void setMDP(String^);
        void Cryptage();
        void Decryptage();
        String^ getNom();
        String^ getEmail();
        String^ getDateNais();
        String^ getPrenom();
        String^ getMDP();
    };
}
