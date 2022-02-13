#include <iostream>

using std::string, std::ostream;

class Zwembad
{
private:
    float breedte;
    float lengte;
    float diepte;

public:
    Zwembad();
    Zwembad(float breedte, float lengte, float diepte);

    float get_breedte();
    float get_lengte();
    float get_diepte();
    float inhoud();

    void set_breedte(float breedte);
    void set_lengte(float lengte);
    void set_diepte(float diepte);

    string to_string();
    friend ostream &operator<<(ostream &os, const Zwembad &zwembad);
};