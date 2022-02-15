#include "include/persoon.hpp"

using std::string;

Persoon::Persoon(string naam, float budget){
    this->naam = naam;
    this->budget = budget;
}

string Persoon::get_naam(){
    return naam;
}


float Persoon::get_budget(){
    return budget;
}
    
vector<Game> Persoon::get_games(){
    return games;
}

void Persoon::set_naam(string naam){
    this->naam = naam;
}

void Persoon::set_budget(float budget){
    this->budget = budget;
}

void Persoon::koop(Game nieuwe_game){
    
}

void Persoon::verkoop(Game game, Persoon koper){

}

string Persoon::to_string(){

}

ostream &operator<<(ostream &os, const Persoon &p){
    os << p << ": " << p.naam << " heeft een budget van " << p.budget << " en bezit de volgende games:\n" << p.games;
    return os;
}