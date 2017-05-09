#include <iostream>
#include "Object.cpp"

using namespace std;

class Player : public  Object
{
    string name;
    int hp;


    vector <Item> equipment;
    public:


    Player(string name, int hp); // Dodaæ zmienne do konstruktora

    Position positionOnMap()
    {
        return getPosition();
    }

    int PlayerStrenght()
    {

    }

    void addToEquipment(Item &item)
    {
        equipment.push_back(item);
    }

    int getStrenght()
    {
        int strenght = 0;

        for(int i =0; i < equipment.size(); i++)
        {

            strenght+=equipment[i].getStrenght;
        }
    }
// Brakuje pozycji
};
