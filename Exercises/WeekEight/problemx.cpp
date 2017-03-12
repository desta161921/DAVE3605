#include <iostream>
#include <vector>

class Zombie {

    public:
        void act(){
            std::cout<<"Zombie Attack!"<<std::endl;
        }
};

class ArmoredZombie : public Zombie {
    public:
        void act(){
            std::cout<<"Armored Zombie Attack!"<<std::endl;
        }
};

class FeralZombie : public Zombie {
    public:
        void act(){
            std::cout<<"Feral Zombie Attack!"<<std::endl;
        }
};

class ArmoredFeralZombie : public FeralZombie, public ArmoredZombie {
};

int main(){
    return 0;
}

