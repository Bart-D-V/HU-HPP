#include <iostream>
#include <string>
#include <vector>
#include "game.hpp"

using std::string, std::ostream, std::vector;

class Persoon{
    private:
        string naam;
        float budget;
        vector<Game> games;

    public:
        Persoon();
        Persoon(string naam, float budget);

        string get_naam();
        float get_budget();
        vector<Game> get_games();

        void set_naam(string naam);
        void set_budget(float budget);

        void koop(Game nieuwe_game);
        void verkoop(Game game, Persoon koper);

        string to_string();
        friend ostream &operator<<(ostream &os, const Persoon &p);

}