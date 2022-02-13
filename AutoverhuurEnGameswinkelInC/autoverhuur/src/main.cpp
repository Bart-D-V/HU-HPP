#include "include/autohuur.hpp"

using std::cout, std::endl;

int main()
{
    Klant k("Mijnheer de Vries");
    k.set_korting(10.0);
    Wagen a1("Peugeot 207", 50);
    AutoHuur ah1(4, a1, k);
    cout << "Eerste autohuur:" << ah1 << endl;
    cout << endl;
    
    Wagen a2("Ferrari", 3500);
    AutoHuur ah2(10, a1, k);
    ah2.set_gehuurde_auto(a2);
    ah2.set_aantal_dagen(1);
    cout << "Tweede autohuur: " << ah2 << endl;
    cout << endl;
    
    cout << "Gehuurd: " << ah1.get_gehuurde_auto() << endl;
    cout << "Gehuurd: " << ah2.get_gehuurde_auto() << endl;
    
    return 0;
}