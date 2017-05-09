#include <iostream>
#include "Intereactable.cpp"
#include "Object.cpp"

using namespace std;

class Potion : public Interactive, Object
{
    int vitality;
    int position; // Nie jestem pewny =
public:
    Potion(int vitality);
    void interact(Player player)
    {

    }

    int positionOnMap()
    {

    }
};

