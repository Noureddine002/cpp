#include "Dog.hpp"
#include "Cat.hpp"

#define num 10

int main(void) {
    Animal *anims[num];
    int i = 0;
    while(i < num){
        if (i % 2)
            anims[i] = new Dog();
        else
            anims[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < num){
        delete anims[i];
        i++;
    }
}