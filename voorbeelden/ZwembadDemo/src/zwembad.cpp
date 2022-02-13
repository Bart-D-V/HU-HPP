#include "include/zwembad.hpp"

Zwembad::Zwembad()
{
    breedte = 0.0F;
    lengte = 0.0F;
    diepte = 0.0F;
}

Zwembad::Zwembad(float breedte, float lengte, float diepte)
{
    this->breedte = breedte;
    this->lengte = lengte;
    this->diepte = diepte;
}

float Zwembad::get_breedte()
{
    return breedte;
}

float Zwembad::get_lengte()
{
    return lengte;
}

float Zwembad::get_diepte()
{
    return diepte;
}

float Zwembad::inhoud()
{
    return breedte * lengte * diepte;
}

void Zwembad::set_breedte(float breedte)
{
    this->breedte = breedte;
}

void Zwembad::set_lengte(float lengte)
{
    this->lengte = lengte;
}

void Zwembad::set_diepte(float diepte)
{
    this->diepte = diepte;
}

string Zwembad::to_string()
{
    return "GEGEVENS ZWEMBAD: Dit zwembad is " + std::to_string(breedte) + " meter breed, " + std::to_string(lengte) + " meter lang, en " + std::to_string(diepte) + " meter diep";
}

ostream &operator<<(ostream &os, const Zwembad &zwembad)
{
    os << "GEGEVENS ZWEMBAD: Dit zwembad is " << zwembad.breedte << " meter breed, " << zwembad.lengte << " meter lang, en " << zwembad.diepte << " meter diep";
    return os;
}