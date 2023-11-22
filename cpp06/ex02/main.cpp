#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

#define RANDOM_USELESS_VALUE 5

int setRandom(void)
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    return RANDOM_USELESS_VALUE;
}

Base *generate(void)
{
    static int lol = setRandom();
    (void)lol;
    int nb = rand() % 3;

    switch (nb)
    {
    case 0:
        return new (std::nothrow) A();
    case 1:
        return new (std::nothrow) B();
    case 2:
        return new (std::nothrow) C();
    default:
        return NULL;
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Congratulations, it's an A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Congratulations, it's a B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Congratulations, it's a C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void) dynamic_cast<A &>(p);
        std::cout << "Detecting A" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        (void) dynamic_cast<B &>(p);
        std::cout << "Detecting B" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        (void) dynamic_cast<C &>(p);
        std::cout << "Detecting C" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
    }
}

int main()
{
    Base *ptr1 = generate();
    if (ptr1 == NULL)
    {
        std::cout << "Could not create 1st pointer" << std::endl;
        return 1;
    }
    Base *ptr2 = generate();
    if (ptr2 == NULL)
    {
        std::cout << "Could not create 2nd pointer" << std::endl;
        delete ptr1;
        return 1;
    }
    Base *ptr3 = generate();
    if (ptr3 == NULL)
    {
        std::cout << "Could not create 3rd pointer" << std::endl;
        delete ptr1;
        delete ptr2;
        return 1;
    }
    identify(ptr1);
    identify(*ptr1);
    identify(ptr2);
    identify(*ptr2);
    identify(ptr3);
    identify(*ptr3);

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
