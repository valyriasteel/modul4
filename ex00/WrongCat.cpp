#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
    std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    _type = copy._type;
    std::cout << "WrongCat assignment operator called\n";
    return *this;
}