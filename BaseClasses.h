class Player;

struct Position
{
    int x;
    int y;
};


class Interactive
{
public:
    virtual void interact(Player &player)=0;
};


class Object
{
    Position position;
public:
    Object(int x, int y);
    void setPosition(int x, int y);
    Position getPosition();

};
