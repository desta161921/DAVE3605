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

## Problem Three
Solution found in `problemthree.cpp`

### Part I
Nothing special here, just syntax, check code.
### Part II
The different ways are listed in the code, there is no difference except syntax, I prefer`a[2]` which is easier to read than `*(a+2)`.
### Part III
Accessing element 13 (index 12) is an index out of bounds mistake, the compiler doesn't warn me (g++ version 6.3.1
) and the problem even runs fine! But the value I get is totally random. This is another example of undefined behavior. It might crash, it might print junk, it might create a black hole.
### Part IV
See code, nothing special here, except that we have to specify the size of the array as the second parameter, else the function doesn't know where the function starts or ends.
### Part V
See code, we allocate a chunk of memory the size of 20 ints and assign it to the arr pointer then we iterate in reverse from 19 down to 0 using the derefence operator to access every element of the array.
### Part VI
Type safety is a big thing in C++ and as such there is special C++ syntax for passing an array of constant size (not a pointer!!!), see code. Notice that the "not better way" doesn't work on anything else except array of size 10 integers while the "better way" works on anything! (but is not something we have learned about, this is called a template in c++)


##Problem Four
Solution found in `problemfour.cpp`
## Part I & Part II
Nothing special here, see code.
### Part III
A sentence is an array of words. We cannot use `char sentence[][] = {"Hello", "World"}` unfortunately,
we can say "figure out for me how many words I will use but I will tell you that each word is at most 10 characters long" for the program to compile.

### Part IV
See above. Now we have specifically told that we can hold max 2 words.

### Part V
This is beautiful by comparison to what we did above. `std::string` is much easier to use and much clearer, please don't use C-style string.


## Extra
Since this is an extra I have chosen to introduce the keyword typedef, which lets us pretend we created a new type (in this case `RGBA`) which isn't really a new type but `unsigned int` but that is too long to write and not as descriptive as `RGBA`.

The solution is pretty straight-forward, we know that an unsigned int holds 4 bytes, so if we use a `char*` that points to that unsigned int then we can increment it 4 times to hold all 4 RGBA values (since char is 1 byte)
