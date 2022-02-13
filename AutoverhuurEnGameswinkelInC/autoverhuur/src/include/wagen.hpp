#include <iostream>

using std::string, std::ostream;

class Wagen{
    private:
        string type;
        double prijs_per_dag;

    public:
        Wagen();
        Wagen(string type, double prijs_per_dag);

        double get_prijs_per_dag();

        void set_prijs_per_dag(double prijs_per_dag);

        string to_string();
        friend ostream &operator<<(ostream &os, const Wagen &wagen);
};
