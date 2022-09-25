#include <iostream>
#include <string>

class Base {
public:
    virtual ~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate (void){
    srand(time(NULL));
    int randNumber;
    randNumber = (rand() % 3);
    if(randNumber == 0){
        std::cout << " Instanciated from A " << std::endl;
        A *a = new A();
        return a;
    }
    else if(randNumber == 1){
        std::cout << " Instanciated from B " << std::endl;
        B *b = new B();
        return b;
    }
    else if(randNumber == 2){
        std::cout << " Instanciated from C " << std::endl;
        C *c = new C();
        return c;
    }
    return NULL;
}

void identify(Base *p){
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*>(p);
    if(a)
        std::cout << "The pointer type is A" << std::endl;
    b = dynamic_cast<B*>(p);
    if(b)
        std::cout << "The pointer type is B" << std::endl;
    c = dynamic_cast<C*>(p);
    if(c)
        std::cout << "The pointer type is C" << std::endl;
}

void identify(Base &p){
    A a;
    B b;
    C c;

    try{
        a = dynamic_cast<A&>(p);
        std::cout << "The pointer type is A" << std::endl;
    }
    catch(std::exception &e){};
    try{
        b = dynamic_cast<B&>(p);
        std::cout << "The pointer type is B" << std::endl;
    }
    catch(std::exception &e){};
    try{
        c = dynamic_cast<C&>(p);
        std::cout << "The pointer type is C" << std::endl;
    }
    catch(std::exception &e){};
}

int main(void){
    Base *base = generate();
    identify(base);
    identify(*base);
    delete(base);
    return 0;
}