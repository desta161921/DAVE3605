#include <iostream>
#include <cmath>


/** 
 * Solution I
 void squareroot(int arg) {
 std::cout<<"sqrt of "<<arg<<" is: "<<std::sqrt(arg)<<std::endl;
 }
 int main() {
 squareroot(4);
 return 0;
 }
 **/

/** 
 * Solution II
 *
 void area_circle(double radius, double& area);

 int main() {
 squareroot(4);
 double r = 1;
 double a;
 area_circle(r, a);
 std::cout<<"The area of a circle with radius: "<<r<<" is: "<<a<<std::endl;
 return 0;
 }

 void area_circle(double radius, double& area){
 static const double pi = std::atan(1) * 4;
 area = pi*radius*radius;
 }
 **/

/** 
 * Solution III
 * Iterative version
 * 
 int factorial(int);

 int main(){
 std::cout<<"Factorial of 4: "<<factorial(4)<<std::endl;
 std::cout<<"Factorial of 5: "<<factorial(5)<<std::endl;
 std::cout<<"Factorial of 6: "<<factorial(6)<<std::endl;
 return 0;
 }
 int factorial(int n){
 int ret = 1;
 for(int i=0; i<n; i++) {
 ret *= (i+1);
 }
 return ret;
 }

 **/


/**
 * Foo bar

namespace Foo{
    void bar(){
        std::cout<<"Bar!"<<std::endl;
    }
}


using namespace Foo;

int main(){
    bar(); //works because of the using namespace Foo above
    Foo::bar(); //works no matter what
    return 0;
}


**/

