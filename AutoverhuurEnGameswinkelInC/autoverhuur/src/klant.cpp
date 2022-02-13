#include "include/klant.hpp"

using std::string;

Klant::Klant(string naam){
    this->naam = naam;
}

double Klant::get_korting(){
    return korting_percentage;
}

void Klant::set_korting(double korting_percentage){
    this->korting_percentage = korting_percentage;
}

string Klant::to_string(){
    return "Dit is klant " + naam + " en heeft " + std::to_string(korting_percentage) + "% korting.";
}

ostream &operator<<(ostream &os, const Klant &klant){
    os << klant.naam << " (korting: " << klant.korting_percentage << "%)";
    return os;
}
