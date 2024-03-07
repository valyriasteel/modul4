#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called\n";
    for (int i = 0; i < 100; i++)
        _ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignment operator called\n";
    for (int i = 0; i < 100; i++)
        _ideas[i] = copy._ideas[i];
    return *this;
}