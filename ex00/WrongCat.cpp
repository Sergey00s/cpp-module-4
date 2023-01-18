#include "WrongCat.h"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{

}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
}

WrongCat &WrongCat::operator=(WrongCat& other)
{
    this->type = other.type;
    return (*this);
}



void WrongCat::makeSound() const
{
    std::cout << "kedy" << std::endl;
}

