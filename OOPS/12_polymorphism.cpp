/*
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.



Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
*/
#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void AnimalSound(){
        cout<<"The Animal makes a sound...\n";
    }
};
class Pig:public Animal{
    public:
    void AnimalSound(){
        cout<<"The pig says:wee wee...\n";
    }
};
class Dog:public Animal{
    public:
    void AnimalSound(){
        cout<<"The Dog says:bow wow...\n";
    }
};
int main(){
    Animal animal;
    Pig pig;
    Dog dog;
    animal.AnimalSound();
    pig.AnimalSound();
    dog.AnimalSound();
    return 0;
}