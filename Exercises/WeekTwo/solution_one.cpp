#include <iostream>


/**
 * The code bellow will issue a compile time error
 * The reason being that reference variables cannot be uninitizalied.
 * As to why, reference variables have the same memory as the value they reference
 * even if they are backed by pointers in the implementation and as such it is counterintuitive to have
 * a value point to nowhere (that is what pointers are for, reference values were invented to give a safer 
 * pointer abstraction)
 *
 * */

void Add_By_Value(int a, int b){
    a+= 5;
    b+= 5;
}

void Add_By_Reference(int& a, int& b){
    a+=5;
    b+=5;
}

int main() {
    //int& a;
    int a = 10;
    int b = 15;

    std::cout<<"a,b before add_by_value: "<<a<<","<<b<<std::endl;
    Add_By_Value(a,b);
    std::cout<<"a,b after add_by_value: "<<a<<","<<b<<std::endl;

    std::cout<<"a,b before add_by_reference: "<<a<<","<<b<<std::endl;
    Add_By_Reference(a,b);
    std::cout<<"a,b before add_by_reference: "<<a<<","<<b<<std::endl;
    return 0;

}



