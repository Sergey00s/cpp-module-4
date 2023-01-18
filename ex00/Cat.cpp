#include "Cat.h"

Cat::Cat()
{
    this->type = "Cat";
}

Cat::~Cat()
{

}

Cat::Cat(std::string type)
{
    this->type = type;
}

Cat &Cat::operator=(Cat& other)
{
    this->type = other.type;
    return (*this);
}



void Cat::makeSound() const
{
    std::cout << "kedy" << std::endl;
}

