#Excercise set week two

Feedback on these excercises is very much appreciated. Send mail to one of the lecturers or to Aryan at aryannm@gmail.com


##Problem X: (Repetition)
What do you think the output will show?
```c++
#include <iostream>
int main(){
    int a = 10;
    int b = a++;
    std::cout<<"a,b: "<<a<<", "<<b<<std::endl;
    int c = ++b;
    std::cout<<"a,b,c: "<<a<<", "<<b<<", "<<c<<std::endl;
    return 0;
}
```
##Problem One:    

1. In C/C++ a declartion means giving a variable a type and a name, like
   int a; 
   While defining something (like a variable) means to both declare and initlize, like
   int a = 3;
   What happens if you declare a reference variabe? like
   int& a;
   Explain the outcome. (Hint: There is no universal answer)
2. Write a C++ program with two functions called Add_By_Value(int, int) and Add_By_Reference(int &, int &) that are supposed to add two values and further increment those two values by 5 in both functions. Display the  final values just before the end of each function, and display the final values from the main function as well. 





##Problem Two: (Scope and namespaces)

What is the outcome of the following program? 
```c++
	#include <iostream>
	using namespace std;
	int a = 12;
	int main() {
		int a = 20;
		std::cout<<"a: "<<a<<std::endl;
	}
```
Why? What happens here?

What is the outcome of the following?
```c++
void f(){
	int x = 12;
}
int main() {
	std::cout<<x;
}
```
What does "using namespace std" do? Why do we use it?

Write and compile the following
```c++
#include <iostream>

using std::cout;
int main(){
	cout<<"Hello World"<<endl;
	return 0;   
}
```
Does it compile? Why? Why not?

##Problem Three: (Functions)

1. Write and test a function that computes the square root of a number.
2. Write a void function that calculates the area of a circle with radius and area as parameters.
3. Write a function that computes the factorial of an integer.
4. Create a function called bar that prints out "bar!".
5. Create a namespace called Foo and add all your functions to this namespace. Use the namespace to call your functions.


##Problem Four: (Strings)

1. Write a function that checks if the word "secret" is in a string
2. Write a function that checks if a string is is a palindrome 
(Hint: check if there is a library function that can help you)



##Extra:
Try to write a function that computes the factorial recursively.
Find the factorial of 100001 recursively, what happens? Why?
