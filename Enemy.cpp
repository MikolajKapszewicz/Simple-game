#include <iostream>
#include "Object"
#include "Interactive"

using namespace std;

class Enemy : public Interactive, Object
{
    int strenght;

public:
    Enemy (int strenght);
    void interact(Player &player)
    {
        if()
    }

    Position positionOnMap()
    {
        return getPosition();
    }

};
