#include <iostream>
using namespace std;

class Entity{
private:
    string Name;
    int Health;
    int Power;

public:
    //virtual destructor
    virtual ~Entity() {}

    void setName(string name){ Name = name;}
    bool setHealth(int health){ 
        if(health < 0) {
            Health = 0;
        } else {
            Health = health;
        }
        return true;
    }
    void setPower(int power){ Power = power;}

    string getName(){return Name;}
    int getHealth(){return Health;}
    int getPower(){return Power;}

    //constructor
    Entity() 
        : Name("Unknown"), Health(0), Power(0) {}

    Entity(string name, int health, int power) 
        : Name(name), Health(health), Power(power){}

    //abstraction 
    //incomplete blueprint
    virtual void performAction() = 0;


    void attack(Entity* target){
        cout << getName() << " attacks " << target->getName() << "!" << endl;

        int newHealth = target->getHealth() - getPower();
        target->setHealth(newHealth);

        cout << target->getName() << " now has " << target->getHealth() << " HP." << endl;
    }

};

class Player : public Entity{
public:
    Player() : Entity() {}
    Player(string name, int health, int power) : Entity(name, health, power){}

    void performAction() override {
        cout << getName() << " swings a sword for " << getPower() << " damage." << endl;
    }
};

class Boss : public Entity{
public:
    Boss() : Entity() {}
    Boss(string name, int health, int power) : Entity(name, health, power){}
    void performAction() override {
        cout << getName() << " unleashes a devastating area attack for " << getPower() << " damage." << endl;
    }
};

void battle(Entity* a, Entity* b){

    int i = 1;
    while(a->getHealth() > 0 && b->getHealth() > 0){
        
        cout << "Round " << i << endl;

        a->attack(b);
        if(b->getHealth() <= 0) break;
        b->attack(a);

        i++;

    }

    if(a->getHealth() != 0) cout << a->getName() << " won!";
    if(b->getHealth() != 0) cout << b->getName() << " won!";

    
}

int main(){

    Player player1 = Player("Hercules", 100, 20);
    
    Boss boss1 = Boss("Armageddon", 1000, 20);
   
    Entity* dungeonEntitieas[4];


    dungeonEntitieas[0] = &player1;
    dungeonEntitieas[1] = &boss1;

    battle(&player1, &boss1);


    return 0;
}