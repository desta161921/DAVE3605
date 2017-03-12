
---
geometry: margin=1in
---
#Excercise set week Eight

Feedback on these excercises is very much appreciated. Send mail to one of the lecturers or to Aryan at aryannm@gmail.com.

This one will be especially relevant to implementing inheritance in your projects.

##Problem X - Repetition

1. Create a class `Zombie` and subclass it by creating classes `ArmoredZombie` and `FeralZombie`.
2. Create member methods and member variables as you see fit for these classes (be creative!).
##Problem One - Runtime polymorphism
Refer to Problem X.

### The Traps -  Diamond Of Death
Refer to google or wikipedia.   

1. Create a third class, `ArmoredFeralZombie` which inherits from `FeralZombie` and `ArmoredZombie   

```c++
class ArmoredFeralZombie : public ArmoredZombie, public FeralZombie {
}
```

2. Does this compile? Why not?
3. Make the code compile (hint virtual inheritance)
### The Traps - Slicing
Suppose your class Zombie has a member method 
```c++
void act(){
    std::cout<<"Zombie Attack!"<<std::endl;
}
```
Implement the same function in the base classes `ÀrmoredZombie` and `FeralZombie`but with correct output (eg "Feral Zombie Attack!").

Now create an instance of `ArmoredZombie` in your main function. Test `act()`.    

Great! It shows the correct output, now suppose you have a function (not a member of a class, just a standalone function)
```c++
void provokeAttack(Zombie z){
    z.act();
}
```
Now create an instance of each type, eg:
```c++
    Zombie z;
    ArmoredZombie a;
    FeralZombie f;
    ArmoredFeralZombie af;

    provokeAttack(z);
    provokeAttack(a);
    provokeAttack(f);
    provokeAttack(af);
```
1. What is the expected output?
2. What is actually printed out? This is VERY important, this concept does not exist in language such as java where objects are passed as value. 

What happens here is that you have declared a function that takes a zombie with pass-by-value, which means any zombies (superclass or derived) passed to this function will be copied to a `Zombie` AND NOTHING MORE! This is slicing, the compiler simply cuts off parts of the object when copying, it just needs a `Zombie` to use the function.

The solution? Use references if you want to access the object without the compiler slicing it off :)

### The Traps - Name Hiding

#### The Solution
Now create another function
```c++
```
```
##Problem Two - Dynamic Polymorphism
##Problem Three - Function Overloading
Refer to lecture notes for details.

1. Create a function called `void foo(int a)` that prints out the value it takes with the output "Hello my int value is: "

2. Now create overloaded functions that takes `char c`, `std::string s` and `long l` as parameters and print similar output, with type and value.

3. What do you think the point of overloading a function is?

##Problem Four - Inheritance
Suppose you are creating a game and instead of creating new classes all the time, eg AggressiveMonster, PassiveMonster, FriendlyMonster etc you find out that you can save yourself a lot of typing and structure your code better if you use the concept of inheritance.

If you can, try and make the classes into seperate `hpp` and `cpp` files.

1. Create a class called `Player` with members `int x`, `int y`, `int hp`, `std::string name`, create appropiate setters and getters.

2. Create a class `Monster` that has datamembers `int x`, `int y`, `int hp`, `int attacktimer`, create appropiate setters and getters.

3. Hmm it seems a `Monster` and a `Player` share a lot of common things, create a class called `Creature` with datamembers `int x`, `int y`, `int hp`, `std::string name` with appropiate setters and getters and use inheritance to make your `Monster` and `Player` classes to inherit from this `Creature`.

4. To your `Monster` class add a member method called `void seek(Player p)`. Now create a `PassiveMonster` class and a `AggressiveMonster` class, how would you use function overriding to change `seek` for `PassiveMonster` and `AggressiveMonster`? You might have to refer the C++ book on virtual functions (or use google).

5. (Extra) Create a class `Game` with two datamembers `std::vector<Monster*> creatures` and `Player player`.  Create a player and a Monster and add them to the game (maybe Game should have appropiate setters and getters?). This is another very powerful feature of inheritance, any speciality monster also happens to be a `Monster`.

Notice that the vector contains `Monster*` and NOT `Monster`, the reason for this is calld slicing. Further research in the book or google (or send me a mail).

