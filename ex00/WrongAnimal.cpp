#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    ;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal& other)
{
    this->type = other.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "wrongAn" << std::endl;
}