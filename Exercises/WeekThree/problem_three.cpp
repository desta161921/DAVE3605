#include <iostream>
#include <algorithm>
#include <string>
#include <set>


void alphabet_frequency(const std::string& s){
	std::set<char> uniques;
	for(const char& c : s){
		if(std::isalpha(c))
			uniques.insert(c);
	}

	for(const char& c : uniques){
		int frequency = std::count(s.begin(), s.end(), c);
		std::cout<<c<<": "<<frequency<<std::endl;
	}
}

int main(){
	std::string s("Hello World!");
	alphabet_frequency(s);
	return 0;
}
