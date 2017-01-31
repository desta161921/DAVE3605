#include <iostream>


/**
 *
 * ++a stands for PRE READ increment, which means that the value will change and then be read
 * a++ stands for POST READ increment, which means that the value will be read then changed.
 *
 * So the below will show 11,10 first
 * Then 11, 11, 11
 **/
int main(){
    int a = 10;
    int b = a++;
    std::cout<<"a,b: "<<a<<", "<<b<<std::endl;
    int c = ++b;
    std::cout<<"a,b,c: "<<a<<", "<<b<<", "<<c<<std::endl;
    return 0;
}
