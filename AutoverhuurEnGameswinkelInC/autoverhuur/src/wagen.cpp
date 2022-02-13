#include "include/wagen.hpp"

using std::string;

Wagen::Wagen(string type, double prijs_per_dag){
    this->type = type;
    this->prijs_per_dag = prijs_per_dag;
}

double Wagen::get_prijs_per_dag(){
    return prijs_per_dag;
}

void Wagen::set_prijs_per_dag(double prijs_per_dag){
    this->prijs_per_dag = prijs_per_dag;
}

string Wagen::to_string(){
    return "autotype: " + type + " met prijs per dag: " + std::to_string(prijs_per_dag);
}

ostream &operator<<(ostream &os, const Wagen &wagen){
    os << wagen.type << " met prijs per dag: " << wagen.prijs_per_dag;
    return os;
}