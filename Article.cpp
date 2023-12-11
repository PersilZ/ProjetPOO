#include "Article.h"
namespace NS_Site
{
    Article::Article()
    {
        refArt = 0;
        QuantArt = 0;
        NomArt = "";
    }

    Article::Article(String^ a, int^ b, int^ c) {
        setNomArt(a);
        setQuantArt(b);
        setRefArt(c);
    }

    Article::~Article() {
        delete refArt;
        delete QuantArt;
        delete NomArt;
    }
    void Article::setRefArt(int^ x) {
        refArt = x;
    }
    void Article::setQuantArt(int^ x) {
        QuantArt = x;
    }
    void Article::setNomArt(String^ x) {
        NomArt = x;
    }
    int^ Article::getRefArt() {
        return refArt;
    }
    int^ Article::getQuantArt() {
        return QuantArt;
    }
    String^ Article::getNomArt() {
        return NomArt;
    }

}
