# Solutions

##Problem X (Repetition)
The solution to this problem lies in the name of the operators, `++a` is the pre-increment operator acting on a
and `a++` is the post-increment operator working on a. 

The assignment `int b = a++` will increment the value of `a` after (post) it has been read and stored in b. Which means that b will be equal to 10 and a will be 11. The first output is therefore "11,10".

The assignment `int c = ++b` will increment the value of b before (pre) it has been read and stored in c, which means that c will be assigned the value 11, and b will increase from 10 to 11. The final output is therefore "11,11,11"
##Problem One (References)
###Reference initialization
There is no "right" answer here except for the fact that the code will issue a compiler error. The reason being that reference variables cannot be uninitialized. As to why, reference variables have the same memory as the value they refer to even if they are backed by pointers in the implementation and as such it is counterintuitive to have a value point to nowhere, that is what pointers are for, reference values were invented to give a much safer pointer abstraction.
###Add by value & add by reference
Add_By_Value changes the values of (a,b) only inside its own scope. When you pass values to function whose parameters are defined as values and NOT references, a copy of the variable is made and whatever happens inside the function happens to the copies, the originals are untouched.

Add_By_Value takes references values as parameters so `a+=5` and `b+=5` are actually the original a,b so changes inside this function is also reflected outside.
##Problem Two (Scope & Namespace)
```c++
int a = 12;
int main(){
    int a = 20;
    std::cout<<"a: " <<a<<std::endl;
    return 0;
}
```
The output of the above program is "20" and not 12 because the variable inside main takes precedence (since it is in the same scope as std::cout) over the variable outside of main.

```c++
void f() {
    int x = 12;
}

int main() {
    std::cout<<x;
    return 0;
}
```
The code above will fail to compile, there are two different functions here, f() and main(). Any values declared/defined inside one is NOT visible to the other. Since x is defined inside f() there is no way for main() to see it.

```c++
using std::cout;

int main(){
    cout<<"Hello World"<<endl;
    return 0;
}
```
The namespace use above means that the function std::cout doesn't need to be called with its namespace name but can be used as cout, but this applies only to cout! endl still has to be called std::endl, thus we get a compiler error saying has no clue what endl is.

##Problem Three (Functions)
###Squareroot
The idea here is to wrap the function provided by the standard library inside our own function. See `solution_three.cpp`
###Area of circle
This is meant to demonstrate the power of reference values and as an alternative to returning the calculated area, the value in `double& area` is changed.
###Factorial
Nothing special here, we use the definition of the factorial to iterate in a loop and multiply together all the leading numbers up to n. See `solution_three.cpp`
###Bar!
Straight-forward, see `solution_three.cpp`
###Foo!
See `solution_three.cpp` and note the alternate ways one can use the namespace.
##Problem Four(Strings)
###Secret
Full solution in `solution_four.cpp`. The point here is that we use builtin functions instead of implementing our own, the standard c++ library has methods for nearly any thinkable programming problem (and where it lacks, libraries such as boost or armadillo can augment & strengthen).

Of special note is `std::boolalpha` use to std::cout which makes sure that instead of getting 1/0 as output we get
True/False.
###Palindrome
Full solution in `solution_four.cpp`. A palindrome is defined as a string that is equal to its reversed version.
There are many different ways to solve this problem but the point here again is that we don't have to implement stuff like reversing a string (or transforming it to lowercase so Lol becomes a palindrome, remember that for the computer L!=l). 

```c++
[](unsigned char c) {
	    return std::tolower(c);
	    });
```
This special syntax defines what is called an anyonymous function (or a lambda) whose job is straight-forward, take a character and make sure it becomes lowercase. Notice that we have this whole thing as the final paramter to std::transform, which means that transform is very flexible, we can ask it to lowercase only the letter A if we want to for example (with an added if test inside our lambda).

`s.begin(), s.end()` define what is known as iterators (you can look them up on any C++ book or online resource) wich is a way for the standard library functions and classes to expose iteration over a dataset to other functions and classes.
##Extra
See `solution_extra.cpp` for full solution. The way the factorial is calculated is using recursion. A recursive function simply means that the function can keep calling itself (preferably with different parameters) until a conditon is reached. Once the condition is reached a value is returned, and the function that called the function with the reached condition returns, and the function that called this again returns...and so on. If you are familiar (if not, google) this is much like Matryoshka dolls.

But you can't nost dolls forever and you can't go infinitely deep with recursive functions, everytime a function is called some overhead is added to the program and eventually there is no more resources to use and the program will terminate with error. On my computer this happens if I calculate factorial of 1 million recursively...(arch linux)
