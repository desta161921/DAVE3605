#include <iostream>
int main(){
    int a = 10;
    int b = a++;
    std::cout<<"a,b: "<<a<<", "<<b<<std::endl;
    int c = ++b;
    std::cout<<"a,b,c: "<<a<<", "<<b<<", "<<c<<std::endl;
    return 0;
}

