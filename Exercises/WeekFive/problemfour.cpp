#include <iostream>
#include <string>


class Person {
    private:
        std::string name;
        std::string lastname;
        int age;
        Person* parent;

    public:
        Person(std::string name, std::string lastname, int age)
            :name{name},lastname{lastname},age{age}{
            }
        void setParent(Person* p){
            if(p == parent) return;
            parent = p;
        }
};

int main(){
    Person p{"Foo", "Bar", 12};
    Person p2{"FooBar", "Sr", 40};
    p.setParent(&p2);


    return 0;
}
