#include <iostream>
#include <string>

void foo(int a){
    std::cout<<"My int value: " <<a<<std::endl;
}

void foo(long l){
    std::cout<<"My long value: " <<l<<std::endl;
}

void foo(std::string s){
    std::cout<<"My string value: " <<s<<std::endl;
}

void foo(char c){
    std::cout<<"My char value: " <<c<<std::endl;
}

int main(){
    long l = 42L;
    int a = 12;
    char c = 'a';
    std::string s("FooBar");

    foo(a);
    foo(l);
    foo(s);
    foo(c);
    return 0;
}
