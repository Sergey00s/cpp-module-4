#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal& other);
        Animal& operator=(Animal& other);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();
};

#endif