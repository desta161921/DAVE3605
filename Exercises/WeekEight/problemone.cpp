#include <iostream>
#include <vector>

class Zombie {
    public:
        void act()
        {
            std::cout<<"Zombie Attack!"<<std::endl;
        }
};
class ArmoredZombie : virtual public Zombie {
    public:
        void act(){
            std::cout<<"Amored Attack!"<<std::endl;
        }
};
class FeralZombie : virtual public Zombie{
    public:
        void act(){
            std::cout<<"Feral Attack!"<<std::endl;
        }
};

class ArmoredFeralZombie : public ArmoredZombie, public FeralZombie {
    public:
        void act(){
            ArmoredZombie::act();
            std::cout<<"Armored Feral Attack!"<<std::endl;
        }
};

/**
void provokeAttack(Zombie z){
    z.act();
}
**/

void provokeAttack(Zombie& z){
    z.act();
}

int main(){
    Zombie z;
    ArmoredZombie a;
    FeralZombie f;
    ArmoredFeralZombie af;

    provokeAttack(z);
    provokeAttack(a);
    provokeAttack(f);
    provokeAttack(af);

    af.act();
    return 0;
}
