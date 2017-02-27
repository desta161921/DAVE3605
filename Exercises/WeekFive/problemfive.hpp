#ifndef PROBLEMFIVE_HPP
#define PROBLEMFIVE_HPP
#include <string>

class Person{
    private:
        std::string name;
        std::string lastname;
        int age;
        Person* parent;

    public:
        Person(std::string name, std::string lastname, int age);

        void setAge(int age);
        void setName(std::string name);
        void setLastName(std::string lastname);
        void setParent(Person* p);

        int getAge() const;
        std::string getName() const;
        std::string getLastName() const;
        Person* getParent() const;
};

#endif
