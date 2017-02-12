#include <iostream>
#include <limits>

int main(){
	int min = std::numeric_limits<int>::max();
	int max = std::numeric_limits<int>::min();

	std::cout<<"Input 10 integers for min/max calculation."<<std::endl;

	int counter = 0;
	int input;

	while(counter < 10){
		if(std::cin>>input) {
			counter++;
			if(input>= max) max = input;
			if(input<= min) min = input;
		}
		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(),'\n');
		}
	}
	std::cout<<"min,max: "<<min<<", "<<max<<std::endl;
	return 0;
}
