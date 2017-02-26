#include <iostream>

int cynic_estimate(int value){
	return 1 * value;
}
int reasonable_estimate(int value){
	return 2 * value;
}
int optimistic_estimate(int value){
	return 5 * value;
}

int* economic_forecast(int* array, int(*fct)(int)){
	int* forecasted_values = new int[7];
	for(int i=0; i<7; i++){
		forecasted_values[i] = (*fct)(array[i]);
	}
	return forecasted_values;
}


int main(){

	/**
	 * Parts I,II,III
	 */

	int (*cynic_ptr)(int) = &cynic_estimate;
	int (*reasonable_ptr)(int) = &reasonable_estimate;
	int (*optimistic_ptr)(int) = &optimistic_estimate;
	std::cout<<"Cynic ptr use: " << (*cynic_ptr)(3)<<std::endl;
	std::cout<<"Reasonable ptr use: " << (*reasonable_ptr)(3)<<std::endl;
	std::cout<<"Optimistic ptr use: " << (*optimistic_ptr)(3)<<std::endl;

	/**
	 * Part IV
	 * */
	auto cynic_ptrauto = &cynic_estimate;
	auto reasonable_ptrauto = &reasonable_estimate;
	auto optimistic_ptrauto = &optimistic_estimate;
	std::cout<<"Cynic ptrauto use: " << (*cynic_ptrauto)(3)<<std::endl;
	std::cout<<"Reasonable ptrauto use: " << (*reasonable_ptrauto)(3)<<std::endl;
	std::cout<<"Optimistic ptrauto use: " << (*optimistic_ptrauto)(3)<<std::endl;


	/**
	 * Part V
	 * */
	int earnings[] = {10,10,11,9,8,11,10};
	int* cynic_forecast = economic_forecast(earnings, &cynic_estimate);
	int* reasonable_forecast = economic_forecast(earnings, &reasonable_estimate);
	int* optimistic_forecast = economic_forecast(earnings, &optimistic_estimate);


	std::cout<<"Cynic forecasts: " <<std::endl;
	for(int i=0; i<7; i++){
		std::cout<<cynic_forecast[i]<<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Realistic forecast: " <<std::endl;
	for(int i=0; i<7; i++){
		std::cout<<reasonable_forecast[i]<<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Optimistic forecast: " <<std::endl;
	for(int i=0; i<7; i++){
		std::cout<<optimistic_forecast[i]<<" ";
	}
	return 0;
}
