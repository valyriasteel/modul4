#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &copy)
{
    _type = copy._type;
    std::cout << "Dog assignment operator called\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof\n";
}