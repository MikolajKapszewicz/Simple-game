#include <iostream>

using namespace std;

struct Position
{
    int x, y;
};

class Player;
class Enemy;
class Potion;
class Item;


class Object
{
public:
    virtual int positionOnMap () = 0;
};

class Interactive
{
public:
    virtual void interact(Player player) = 0;
};


class Player : public  Object
{
    string name;
    int hp;
// Brakuje Item
// Brakuje pozycji

public:
    Player(string name, int hp); // Dodaæ zmienne do konstruktora

    int positionOnMap()
    {

    }

    int PlayerStrenght()
    {

    }

};



class Item : public Interactive, Object
{
    int strenght;
    int position; // Nie jestem pewny
public:
    Item(int strenght);
    void interact(Player player)
    {

    }

    int positionOnMap()
    {

    }


};

class Enemy : public Interactive, Object
{
    int strenght;
    int position; // Nie jestem pewny
public:
    Enemy (int strenght);
    void interact(Player player)
    {

    }

    int positionOnMap()
    {

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
