#pragma once
using namespace System;

namespace NS_Site
{
    public ref class Article
    {
    private:
        String^ NomArt;
        int^ QuantArt;
        int^ refArt;
    public:
        Article();
        Article(String^, int^,int^);
        ~Article();
        void setRefArt(int^);
        void setQuantArt(int^);
        void setNomArt(String^);
        int^ getRefArt();
        int^ getQuantArt();
        String^ getNomArt();
    };
}
