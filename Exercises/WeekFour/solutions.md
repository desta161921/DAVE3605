# Solutions

##Problem X
The solution is available in `problemx.cpp`. Standard C++ way of reading input, we keep reading in temperature values, storing them inside a `std::vector<double>` and 
and if an input reading fails (eg we enter `æ` instead of an integer) then `std::cin` is reset and erronous input is ignored.

A function that takes a `const std::vector<double>&` is used to find the average and print it to console. For why we use min/max refer to last weeks solution set.
##Problem One
Solutions available in file `problemone.cpp`
###Part I
Nothing special here. See code.
###Part II
When I print out the adresses of the pointers I see that two floats declared next to eachother
have a difference of adress of 4 bytes. A double has 8 bytes difference, and a char has a 1 byte difference.

This goes hand in hand with the definition of default type sizes and my computer is working as expected.
###Part III
Much like references, non-const pointers can change the value they point to. So all we have to do is deference the pointers using `*` operator and setting the value to 1.
###Part IV
Since we know how to solve Part III this is not very mysterious, we use dereference operator `*` on a to access its value and set it equal to value of `w` multiplied by value of `l`.

##Problem Two
Solution provided in `problemtwo.cpp`
###Part I
What I have done is create a variable that is unitialized, which means it can hold any value, and since the variable is an int pointer it means it can point to anywhere. Luckily when I try to derefence this I don't summon Cthulu but instead get some "garbage" value. But this is NOT safe, dont ever leave your variables uninitialized. This behavior is undefined, which means that it can give me garbage value, crash my program or very well summon Cthulu.
###Part II
If we want to use pointer variables for our functions but only need read access, we use the const keyword.
Rule of thumb: Use const unless you can't (you need write-access). Notice that a isn't const, so we can do `*a
=...`

###Part III
See code, nothing exciting here, and please dont use pointers to pointers, they are errorprone, hard to read and hard to code, if you solve a problem in C++ using `**``you should have a very good reason.

As to why we would want a pointer to pointer? (C) classic example is `char*` which translates to "list of letters" eg a word and `char**` which translates to "list of words" eg a sentence and `char***` which translates to "list of sentences" etc...

###Extra - Sorting
The comment is commented well enough I think, try to write out how it works on paper and pencil to understand it well. Of note here is the keyword `auto`, it is a feature of modern C++ that lets you ommit the typename, it is automatically figured out. In this case we use what is called a lambda function as our sorter. Notice that we use pass by reference, so we change the original vector.

Do try to experiment with different sorters of your own!

## Problem Three
Solution found in `problem_three.cpp`
This problem can be solved in multiple ways, but I am a big fan of not reinventing the wheel (once I learn how the wheel works) so the solution provided here uses only library methods.

Of note here is the use of `std::set` it works much like `std::vector` but it does not insert a value if it already exists in the set, which is very handy for getting only unique letters.
