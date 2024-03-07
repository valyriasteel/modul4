#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    k->makeSound();
    delete meta;
    delete j;
    delete i;
    delete k;
    const Animal* a[3] = {new Dog(), new Cat(), new Animal()};
    for (int i = 0; i < 3; i++)
    {
        a[i]->makeSound();
        delete a[i];
    }
    return 0;
}