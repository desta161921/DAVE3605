#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>


void part_one_naive(std::vector<int> v){
	for(size_t i=0; i<v.size(); i++){
		std::cout<<v.at(i)<<" ";
	}
	std::cout<<std::endl;
}

void part_one_better(std::vector<int>& v){
	for(size_t i=0; i<v.size(); i++){
		std::cout<<v.at(i)<<" ";
	}
	std::cout<<std::endl;
}

void part_one_best(const std::vector<int>& v){
	for(size_t i=0; i<v.size(); i++){
		std::cout<<v.at(i)<<" ";
	}
	std::cout<<std::endl;
}

void part_two(const std::vector<int>& v){
	int min = *std::min_element(v.begin(), v.end());
	int max = *std::max_element(v.begin(), v.end());
	std::cout<<"min,max using std algorithms: "<<min<<", "<<max<<std::endl;
}

void extra_sorting(std::vector<int>& v){
	auto sort_by_even = [](int a, int b){
		// Both are even, then sort by value
		if(a%2==0 && b%2==0) 
			return b > a;
		// Either one is even
		else if(a%2==0)
			return true;
		else if(b%2==0)
			return false;
		// Neither is even
		return b > a;
	};
	std::sort(v.begin(), v.end(), sort_by_even);
}
int main(){
	int min = std::numeric_limits<int>::max();
	int max = std::numeric_limits<int>::min();
	std::vector<int> inputs;
	inputs.reserve(10);

	std::cout<<"Input 10 integers for min/max calculation."<<std::endl;

	int counter = 0;
	int input;

	while(counter < 10){
		if(std::cin>>input) {
			counter++;
			inputs.push_back(input);
			if(input>= max) max = input;
			if(input<= min) min = input;
		}
		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(),'\n');
		}
	}
	std::cout<<"min,max: "<<min<<", "<<max<<std::endl;


	part_one_naive(inputs);
	part_one_better(inputs);
	part_one_best(inputs);


	part_two(inputs);
	extra_sorting(inputs);
	std::cout<<"After sort.."<<std::endl;
	part_one_best(inputs);
	return 0;
}

