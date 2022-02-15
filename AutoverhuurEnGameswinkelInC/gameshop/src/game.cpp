#include "include/game.hpp"

using std::string;

Game::Game(string naam, int jaar_geleden, float prijs){
    this->naam = naam;
    this->jaar_geleden = jaar_geleden;
    this->prijs = prijs;
}

string Game::get_naam(){
    return naam;
}

int Game::get_jaar_geleden(){
    return jaar_geleden;
}
    
float Game::get_prijs(){
    return prijs;
}

void Game::set_naam(string naam){
    this->naam = naam;
}

void Game::set_jaargeleden(int jaar_geleden){
    this->jaar_geleden = jaar_geleden;
}

void Game::set_prijs(float prijs){
    this->prijs = prijs;
}

string Game::to_string(){

}

ostream &operator<<(ostream &os, const Game &g){
    os << g.naam << ", uitgegeven in " << 2022 - g.jaar_geleden << "; nieuwprijs: " << g.prijs << "nu voor: ";
    return os;
}