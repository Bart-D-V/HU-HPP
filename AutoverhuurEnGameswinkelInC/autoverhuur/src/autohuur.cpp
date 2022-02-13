#include "include/autohuur.hpp"

using std::string;

AutoHuur::AutoHuur(int aantal_dagen, Wagen aut, Klant huurder) : aut(aut), huurder(huurder){
    this->aantal_dagen = aantal_dagen;
    aut = aut;
    huurder = huurder;
}

Wagen AutoHuur::get_gehuurde_auto(){
    return aut;
}

Klant AutoHuur::get_huurder(){
    return huurder;
}

double AutoHuur::totaalprijs(){
    return aut.get_prijs_per_dag() * aantal_dagen * huurder.get_korting();
}

void AutoHuur::set_aantal_dagen(int aantal_dagen){
    this->aantal_dagen = aantal_dagen;
}

void AutoHuur::set_gehuurde_auto(Wagen aut){
    this->aut = aut;
}

void AutoHuur::set_huurder(Klant huurder){
    this->huurder = huurder;
}

string AutoHuur::to_string(){
    return "aantal dagen: " + std::to_string(aantal_dagen) + "en dat kost " + std::to_string(totaalprijs());
}

ostream &operator<<(ostream &os, const AutoHuur &ah){
    os << "\n autotype: " << ah.aut << "\n op naam van:  " << ah.huurder << "\n aantaldagen: " << ah.aantal_dagen << " en dat kost ";
    return os;
}