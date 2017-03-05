#include <string>
#include <vector>
#include <iostream>

/**
 *
 * Without inheritance
 *

class Player{
    private:
        int m_x;
        int m_y;
        int m_hp;
        std::string m_name;
    public:
        Player(int x, int y, std::string name)
            :m_x(x),m_y(y),m_name(name){
                m_hp = 100;
        }

        void set_x(int x){
            m_x = x;
        }
        void set_y(int y){
            m_y = y;
        }
        void set_hp(int hp){
            m_hp = hp;
        }
        void set_name(std::string name){
            m_name = name;
        }

        int x() const{
            return m_x;
        }
        int y() const{
            return m_y;
        }
        int hp() const{
            return m_hp;
        }
        std::string name() const{
            return m_name;
        }
};

class Monster {
    private:
        int m_x;
        int m_y;
        int m_hp;
        int attacktimer;

        ...constructors and setters and getters ...
};

** End without inheritance **/

class Creature{
    private:
        int m_x;
        int m_y;
        int m_hp;
        std::string m_name;
    public:
        Creature(int x, int y, std::string name)
            :m_x(x),m_y(y),m_name(name){
                m_hp = 100;
        }

        void set_x(int x){
            m_x = x;
        }
        void set_y(int y){
            m_y = y;
        }
        void set_hp(int hp){
            m_hp = hp;
        }
        void set_name(std::string name){
            m_name = name;
        }

        int x() const{
            return m_x;
        }
        int y() const{
            return m_y;
        }
        int hp() const{
            return m_hp;
        }
        std::string name() const{
            return m_name;
        }
};

class Player : public Creature {
    public:
        /**
         * The :Creature(x,y,name) is absolutely necessary, the Player class is a Creature
         * but how can it be a creature if we don't call the constructor that is necessary to make a creature?
         * In order to initialize a player we must initializer a Creature because of the inheritance
         * And so we call :Creature(x,y,name)
         * **/
        Player(int x, int y, std::string name)
            :Creature(x,y,name){
            }

        /**
         * Default constructor
         * */
        Player()
            :Creature(0,0,"Link"){
            }

};

class Monster : public Creature {
    private:
        /** 
         * A creature doesn't have an attacktimer
         * If a monster is a creature but needs MORE than a Creature
         * we simply add it.
         * */
        int m_attacktimer;

    public:
        Monster(int x, int y, std::string name, int attacktimer)
            :Creature(x,y,name), m_attacktimer(attacktimer)
        {

        }

        void set_attacktimer(int attacktimer){
        }

        int attacktimer() const{
            return m_attacktimer;
        }

        virtual void seek(Player& player){
            std::cout<<name()<<" is seeking: " <<player.name()<<" at: "<<player.x()<<" "<<player.y()<<std::endl;
        }
};

/** Part IV - Extra **/

class PassiveMonster : public Monster {
    private:
        bool m_under_attack;

    public:
        PassiveMonster(int x, int y, std::string name, int attacktimer)
            :Monster(x,y,name,attacktimer), m_under_attack(false)
        {
        }

        void set_under_attack(bool under_attack){
            m_under_attack = under_attack;
        }

        bool is_under_attack() const {
            return m_under_attack;
        }

        /**
         * Notice the keyword override, this makes the compiler check
         * that we are not creating a new function in this class called seek but we are actually
         * overriding something we override. Always do this
         * */
        void seek(Player& player) override {
            if(!m_under_attack){
                std::cout<<"Zzzz "<<name()<<" hasn't been aggroed."<<std::endl;
            }
            else {
                std::cout<<"!! "<<name()<<" is under attack!"<<std::endl;
                Monster::seek(player);
            }
        }
};

/**
 * Left as an excersize to the reader 
 * */
class AggressiveMonster : public Monster {

    public:
        AggressiveMonster(int x, int y, std::string name, int attacktimer)
            : Monster(x,y,name,attacktimer)
    {
    }
};

class Game {
    private:
        std::vector<Monster*> monsters;
        Player m_player;
    public:
        Game(Player& player) : m_player(player)
        {
        }

        void add_creature(Monster* monster){
            monsters.push_back(monster);
        }

        Monster* get_creature(int indx){
            return monsters[indx];
        }

        void update(){
            for(auto monster : monsters){
                monster->seek(m_player);
            }
        }
};

int main(){
    Player p(0,0,"Link");
    Game g(p);

    AggressiveMonster aMonster(20,20,"Ganondorf", 10);
    PassiveMonster pMonster(10,10,"Shadow Link", 10);
    Monster m(30,30,"Lava Turtle", 10);

    g.add_creature(&pMonster);
    g.add_creature(&aMonster);
    g.add_creature(&m);

    g.update();
    return 0;
}
