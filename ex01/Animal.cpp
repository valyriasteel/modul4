#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &copy)
{
    _type = copy._type;
    std::cout << "Animal assignment operator called\n";
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound\n";
}