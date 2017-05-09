#include <iostream>
#include <vector>

using namespace std;



class Object
{

    Position position;
public:
    //virtual Position positionOnMap () = 0;
    Position getPosition()
    {
        return position;
    }
};

class Interactive
{
public:
    virtual void interact(Player &player) = 0;
};









class Item : public Interactive, Object
{
    int strenght;
    Position position; // Nie jestem pewny
public:
    Item(int strenght, Position position)
    {
        this->strenght = strenght;
        this->position = position;
    }
    void interact(Player &player)
    {
        return;
    }

    Position positionOnMap()
    {
        return position;


    int getStrenght()
    {
        return strenght;
    }


};

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




int main()
{
    cout << "ey b0ss" << endl;
    return 0;
}
