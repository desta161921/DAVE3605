#include <iostream>
#include <string>
#include <algorithm>
#include <clocale>
/**
 * Solution I
 *
 * This is pretty straight forward, we use the member functions of 
 * the string class.
 * std::boolalpha turns 1/0 bools into true/false
 *
 * 

 bool contains_secret(std::string s);

 int main() {
 std::string s = "The secret codeword is: SECRET";
 std::string s1 = "The sec ret codeward is: SEC ret"; //should return false

 std::cout<<"s contains secret?: " <<std::boolalpha<<contains_secret(s)<<std::endl;
 std::cout<<"s1 contains secret?: " <<std::boolalpha<<contains_secret(s1)<<std::endl;
 }

 bool contains_secret(std::string s){
 return (s.find("secret") != std::string::npos);
 }

*/

bool is_palindrome(std::string);

int main(){
    std::string s = "Able was I ere I saw Elba";
    std::cout<<s <<": palindrome? " <<std::boolalpha<<is_palindrome(s)<<std::endl;
    return 0;
}

bool is_palindrome(std::string s){
    /* 
     * Lol is a palindrome of lol
     * so we need to convert the given string to lowercase
     * http://en.cppreference.com/w/cpp/algorithm/transform for example
     *
     */
    std::transform(s.begin(), s.end(), s.begin(),
	    [](unsigned char c) {
	    return std::tolower(c);
	    });
    std::string copy = s; // Need to take a copy, reverse it, and compare to original
    std::reverse(copy.begin(), copy.end());
    return copy==s;
}
