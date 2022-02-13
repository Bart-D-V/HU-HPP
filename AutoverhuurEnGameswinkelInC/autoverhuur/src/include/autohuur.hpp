#include <iostream>
#include "klant.hpp"
#include "wagen.hpp"

using std::string, std::ostream;

class AutoHuur{
    private:
        int aantal_dagen;
        Wagen aut;
        Klant huurder;

    public:
        AutoHuur();
        AutoHuur(int aantal_dagen, Wagen aut, Klant huurder);

        Wagen get_gehuurde_auto();
        Klant get_huurder();
        double totaalprijs();

        void set_aantal_dagen(int aantaldagen);
        void set_gehuurde_auto(Wagen aut);
        void set_huurder(Klant klant);

        string to_string();
        friend ostream &operator<<(ostream &os, const AutoHuur &autohuur);
};
