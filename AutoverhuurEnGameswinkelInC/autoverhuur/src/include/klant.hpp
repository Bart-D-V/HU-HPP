#include <iostream>

using std::string, std::ostream;

class Klant{
    private:
        string naam;
        double korting_percentage = 0.0;

    public:
        Klant();
        Klant(string naam);

        double get_korting();

        void set_korting(double korting_percentage);

        string to_string();
        friend ostream &operator<<(ostream &os, const Klant &klant);
};