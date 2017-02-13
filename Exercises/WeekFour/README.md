#Excercise set week four

Feedback on these excercises is very much appreciated. Send mail to one of the lecturers or to Aryan at aryannm@gmail.com

Solutions are available in file `solutions.md`. This week has a long list of problems, it is not expected that you finish these in 2 hours.

##Problem X: (Repetition)
Write a program that asks the user to enter temperatures for a week, store them in a vector, then print min, max and average.
Try to do this in C++ (no printf or scanf).

##Problem One - Some Pointers
1. Write a program that creates two variables each of type `char, int, float, double` and create pointer variables
that point to their content.
2. Do the above, but this time print out the pointer values, what do you notice here? (hint size)
3. Write a function that takes two int pointers and changes their value to 1.
4. Write a function called `calculate_area_square` that takes 3 int pointer parameters, the first one is a pointer
to a width variable, the second a pointer to a length variable and the third a pointer to an area. The function has no return (void) but stores the calculated area in the third parameter.

##Problem Two - More Pointers
1. Create an empty int pointer `ìnt* a` and try to prints its value, what happens? Why?
2. Do problem 1.4 again, but this time, make it so that the value of width and height is not modifiable inside the function.
3. Do problem 1.1 again, but this time also make a pointer to the pointer. Can you think of any reason why we would want a pointer to a pointer? What about pointer to a pointer to a pointer?

##Problem Three - Arrays
1. Create an array of ints, and fill the array with values from 1 inclusive to 10 inclusive. 
2. Think of two different ways of getting the value at index 3, which one do you think is better?
3. Try to print out element 13 in the array above, what happens? Why do you think?
4. Create a function that takes an array of integers and prints every value using both of the methods above. You might have to give it two parameters, one for the array and another for the size.
5. Create an array of ints using `new` that has space for 20 values and fill the values in a reverse forloop without using indices. What do you have to always remember when you use `new`? (Haven't gone into this in detail yet)
6. So far we have mostly done the C way of using arrays, try to find out how you would send an array by reference in C++, implement this newfound knowledge in a function that takes an array of ints and prints out every value.

##Problem Four - Strings
C strings are just arrays of characters.

1. Create a char array that has room for the word hello.
2. Create a char array of unspecified size and fill it with a word (Hint [])
3. So far you have created single words, how would you go about creating  an array of words?
4. Create an array of two words, the first word being "Hello" and the second "World"
5. Create a string using `std::string` that contains "Hello World". Compare with what you did above.


##Extra
C/C++ puts a lot of trust in you as the programmer when you use pointers, they are powerful but also errorprone.
We will explore some of its powers.

A color can be represented by a set of four values ranging between 0-255, each respectively representing a 
value for red, green, blue, alpha (https://en.wikipedia.org/wiki/RGBA_color_space), this means that an RGBA color can be packed inside a 4-byte value, like an unsigned int like so `unsigned int color = 0xRRGGBBAA;`, while the 0-255 values can be packed inside an unsigned char like so `unsigned char red = 0xFF`. Try to create a pointer to the the different parts of `color`, to red, green, blue and alpha, so that if you want to only change the blue part of the color you can change the value of this blue pointer! (hint: cast)
