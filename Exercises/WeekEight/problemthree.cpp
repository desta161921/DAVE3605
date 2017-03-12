#include <iostream>
#include <vector>

class Zombie {
    public:
        virtual void act()
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
            std::cout<<"Armored Feral Attack!"<<std::endl;
        }
};

void provokeAttack(Zombie& z){
    z.act();
}

int main(){
    std::vector<Zombie> zombies;
    Zombie z;
    ArmoredZombie a;
    FeralZombie f;
    ArmoredFeralZombie af;

    zombies.push_back(z);
    zombies.push_back(a);
    zombies.push_back(f);
    zombies.push_back(af);

    for(auto& zombie : zombies){
        provokeAttack(zombie);
    }

    std::vector<Zombie*> zombies_ptr;
    zombies_ptr.push_back(&z);
    zombies_ptr.push_back(&a);
    zombies_ptr.push_back(&f);
    zombies_ptr.push_back(&af);
    for(auto zombie : zombies_ptr){
        provokeAttack(*zombie);
    }
    return 0;
}
