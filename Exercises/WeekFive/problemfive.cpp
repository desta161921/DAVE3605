#include "problemfive.hpp"

Person::Person(std::string name, std::string lastname, int age)
    :name{name},lastname{lastname},age{age}{
}

void Person::setAge(int age){
    this->age = age;
}

void Person::setName(std::string name){
    this->name = name;
}

void Person::setLastName(std::string lastname){
    this->lastname = lastname;
}

void Person::setParent(Person* p){
    this->parent = p;
}

std::string Person::getName() const{
    return name;
}

std::string Person::getLastName() const{
    return lastname;
}

int Person::getAge() const{
    return age;
}

Person* Person::getParent() const {
    return parent;
}
