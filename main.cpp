#include <iostream>
#include <vector>

using namespace std;

struct Position
{
    int x, y;
};


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


class Player : public  Object
{
    string name;
    int hp;


    vector <Item> equipment;


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

int main()
{
    cout << "ey b0ss" << endl;
    return 0;
}
