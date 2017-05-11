#include "AdvancedClasses.h"
#include <iostream>

Item::Item(int x, int y, int strenght): Object(x,y)
{
    this->strenght = strenght;

}

void Item::interact(Player &player)
{
    player.addToEquipment(*this);
}

Player::Player(int x, int y, int hp) : Object(x,y)
{
    this->hp = hp;
}

int Item::getStrenght()
{
    return strenght;
}


void Player::addToEquipment(Item item)
{
    equipment.push_back(item);
}

int Player::getStrenght()
{
    int result = 0;

    for(int i = 0; i < equipment.size(); i++)
    {
        result+=equipment[i].getStrenght();
    }
    return result;
}

void Player::takeDamage(int damage)
{
    hp-=damage;
}

int Player::getHp()
{
    return hp;
}


Enemy::Enemy(int x, int y, int strenght) : Object(x,y)
{
    this->strenght = strenght;
}

int Enemy::getStrenght()
{
    return strenght;
}

void Enemy::interact(Player & player)
{
    //duel
    if(player.getStrenght()>=getStrenght())
    {
        std::cout << "won!" << endl;
    }
    else{
        std::cout << "lost!" << endl;
        player.takeDamage(getStrenght() - player.getStrenght());
    }

}

Potion::Potion(int x, int y , int vitality) : Object(x,y)
{
    this->vitality = vitality;
}

int Potion::getVitality()
{
    return vitality;
}

void Potion::interact(Player & player)
{
    player.takeDamage(-getVitality());
}
