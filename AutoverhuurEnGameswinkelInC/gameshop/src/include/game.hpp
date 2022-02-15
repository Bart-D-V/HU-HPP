#include <iostream>
#include <string>

using std::string, std::ostream;

class Game{
    private:
        string naam;
        int jaar_geleden;
        float prijs;

    public:
        Game();
        Game(string naam, int jaar_Geleden, float prijs);

        string get_naam();
        int get_jaar_geleden();
        float get_prijs();

        void set_naam(string naam);
        void set_jaargeleden(int jaar_geleden);
        void set_prijs(float prijs);

        string to_string();
        friend ostream &operator<<(ostream &os, const Game &g);
};