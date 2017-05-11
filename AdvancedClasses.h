#include "BaseClasses.h"
#include <vector>


using namespace std;

class Item : public Interactive, public Object
{
    int strenght;

public:
    Item(int strenght, int x, int y);
    void interact(Player &player);
    int getStrenght();

};

class Player : public Object
{
    int hp;
    vector <Item> equipment;

    public:
    Player(int x, int y, int hp);
    void addToEquipment(Item item);
    int getStrenght();
    void takeDamage(int damage);
    int getHp();

};

class Enemy : public Object, public Interactive
{
    int strenght;

    public:
    Enemy(int strenght, int x, int y);
    void interact(Player &player);
    int getStrenght();
};

class Potion : public Object, public Interactive
{
    int vitality;
public:
    Potion(int x, int y, int vitality);
    int getVitality();
    void interact(Player & player);
};



