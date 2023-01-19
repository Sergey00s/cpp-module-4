#include "Animal.h"

Animal::Animal()
{
    this->type = "Animal";
}

Animal::~Animal()
{
    ;
}

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal &Animal::operator=(Animal& other)
{
    this->type = other.type;
    return (*this);
}

std::string Animal::getType() const
{
    return(this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}