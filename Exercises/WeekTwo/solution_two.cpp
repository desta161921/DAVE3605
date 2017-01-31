#include <iostream>

/**
 * The following will output 20 and not 12,
 * the reason for this is the that the local variable shadows the one one scope higher
 * (in this case a global variable) and as such takes precedence.
 *
 * This is one of the many reasons why global variables should be avoided.
 *
 * 

int a = 12;
int main(){
    int a = 20;
    std::cout<<"a: " <<a<<std::endl;
    return 0;
}

*/



/**
 * The code below will issue a compiler error, the reason being that 
 * the variable x is only visible inside the function f and thus main cant see it.
 *
void f() {
    int x = 12;
}

int main() {
    std::cout<<x;
    return 0;
}

*/


/** The namespace use below means that the function std::cout doesn't need to be called with its
 * namespace name but can be used as cout, but this applies only to cout! endl still has to be called 
 * std::endl, thus we get a compiler error saying it has no clue what endl is.
using std::cout;

int main(){
    cout<<"Hello World"<<endl;
    return 0;
}
**/
