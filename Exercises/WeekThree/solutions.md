# Solutions

##Problem X
### Part I
The solution is available in `problemx.cpp`. Standard C++ way of reading input, we keep reading in integers
and if an input reading fails (eg we enter `æ` instead of an integer) then `std::cin` is reset and erronous input is ignored.

As for the min,max algorithm itself, nothing special here, except we make sure that the absolute limits of what an int means in c++ is used to compare, we could have used something like 10000000 and -1000000 but then our comparison fails if the user enters 10000001.

###Part II
The solution is available in `problemx2.cpp`
This is simply copy-paste from the previous problem with the exception that every valid input is stored inside a vector.

##Problem One
Solutions available in file `problem_one.cpp`
###Part I
Nothing special here.
###Part II
Nothing special here, note that const means read only.
###Part III
This wont compile if I remove the comment. The reason being that we have told the function
that its input is read only (const) and we try to overwrite the input `a*=10`, the compiler catches this and
returns an error.

###Part IV
The problem above shows its usefulness, const references are good if we want to make sure that a function
should NOT in any way change the values that are being sent to it. Suppose we have a function called `print_account_info`. It would make no sense for this function to be able to change anything, it just needs to display account info.

###Part V
This is kind of a trick question. With integers there is seldom any need to use references. 
Code that relies on altering values through references can be error-prone, it is better to have a return value.
But if you know what you are doing and want to change a value inside a function, you have to pass the parameter by refence.

##Problem Two
Solution provided in `problem_two.cpp`
###Part I
I have provided 3 different ways of solving this. The first part, the "naive" part doesn't send a reference of the vector it wants to print, so a copy is made and the v inside `part_one_naive` has nothing to do with the original vvector (I can make changes to this v without touching the one outside, just like with `swap_1` and `swap_2`).

The second part, "better", uses pass by reference, which means that no copy is being made, but I can still make changes to the vector outside, do I really want to do that inside a print function? What if I made a mistake and by accident changed a value..

The third part uses a constant pass-by-reference, which means I can read everything but can't change any value by oaccident or otherwise.

###Part II
This solution uses the `max_element` and `min_element` functions of `<algorithm>`. `v.begin(), v.end()` return iterators (we might go through this later, for now think of them as something that points to a start and end of the vector) and the functions themselves return an iterator so we have to use the `*` in front of the functions to get the int values they point to.

###Extra - Sorting
The comment is commented well enough I think, try to write out how it works on paper and pencil to understand it well. Of note here is the keyword `auto`, it is a feature of modern C++ that lets you ommit the typename, it is automatically figured out. In this case we use what is called a lambda function as our sorter. Notice that we use pass by reference, so we change the original vector.

Do try to experiment with different sorters of your own!

## Problem Three
Solution found in `problem_three.cpp`
This problem can be solved in multiple ways, but I am a big fan of not reinventing the wheel (once I learn how the wheel works) so the solution provided here uses only library methods.

Of note here is the use of `std::set` it works much like `std::vector` but it does not insert a value if it already exists in the set, which is very handy for getting only unique letters.
