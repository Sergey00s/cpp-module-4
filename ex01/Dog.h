#ifndef DOG_H
# define DOG_H


#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
    private:
        /* data */
    public:
        Dog();
        Dog(std::string name);
        Dog& operator=(Dog &other);
        void makeSound() const;
        ~Dog();
};

#endif