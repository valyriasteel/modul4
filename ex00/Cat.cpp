#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &copy)
{
    _type = copy._type;
    std::cout << "Cat assignment operator called\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}