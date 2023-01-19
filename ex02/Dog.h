#ifndef DOG_H
# define DOG_H


#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
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