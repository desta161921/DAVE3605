#include <iostream>

void foo(int& a){
	a*=10;
}

void foo2(const int& a){
	std::cout<<a<<std::endl;
}

void foo3(const int& a){
	/**
	a*=10;
	**/
}

int main(){
	return 0;
}
