#include <iostream>
#include "include/zwembad.hpp"

using std::cout, std::endl;

int main()
{
    Zwembad z1(2.0, 5.5, 1.5);
    cout << "BREEDTE: " << z1.get_breedte() << endl;
    cout << "LENGTE: " << z1.get_lengte() << endl;
    cout << "DIEPTE: " << z1.get_diepte() << endl;
    cout << "BEREKENDE INHOUD: " << z1.inhoud() << endl;
    cout << endl;
    Zwembad z2;
    z2.set_breedte(2.5);
    z2.set_lengte(100.0);
    z2.set_diepte(2.0);
    cout << z2 << endl;
    cout << "BEREKENDE INHOUD: " << z2.inhoud() << endl;

    return 0;
}