#include <iostream>
#include "AdvancedClasses.h"



using namespace std;

int main()
{
    Player gracz(4,5,20);
    Item przedmiot(2,3,4);


    //test dodania przedmiotu do ekwipunku
    przedmiot.interact(gracz);
    cout << gracz.getStrenght() << endl;

    //test walki z potworem (won oznacza walkę wygraną)
    Enemy potwor(1, 1 ,1);
    potwor.interact(gracz);
    cout << gracz.getHp()<<endl;

    //test użycia potiona na graczu
    Potion miksturka(1,1 ,5);
    miksturka.interact(gracz);
    cout << gracz.getHp() << endl;
    return 0;
}
