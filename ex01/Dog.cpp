#include "Dog.h"

Dog::Dog()
{
    this->type = "Dog";
}

Dog::~Dog()
{

}

Dog::Dog(std::string type)
{
    this->type = type;
}

Dog &Dog::operator=(Dog& other)
{
    this->type = other.type;
    return (*this);
}


void Dog::makeSound() const
{
    std::cout << "keupack" << std::endl;
}
