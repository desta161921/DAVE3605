#include <iostream>
#include <vector>
#include <limits>



void print_min_max_average(const std::vector<double>& temps){
	double min = std::numeric_limits<double>::max();
	double max = std::numeric_limits<double>::min();
	double sum = 0;
	double average = 0;

	for(double temperature : temps){
		if(temperature>=max) max = temperature;
		if(temperature<min) min = temperature;
		sum += temperature;
	}
	average = sum/7;
	std::cout<<"min,max,average temps for this week: "<<min<<","<<max<<","<<average<<std::endl;
}


int main(){
	std::vector<double> temperatures;

	int daycounter = 0;
	double input;

	std::cout<<"Input temperatures for the full week."<<std::endl;
	while(daycounter<7){
		if(std::cin>>input){
			temperatures.push_back(input);
			daycounter++;
		}

		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(),'\n');
		}
	}
	print_min_max_average(temperatures);
	return 0;
}
