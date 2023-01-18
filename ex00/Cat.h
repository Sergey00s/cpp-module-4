#ifndef CAT_H
# define CAT_H


#include "Animal.h"

class Cat : public Animal
{
    private:
        /* data */
    public:
        Cat();
        Cat(std::string name);
        Cat& operator=(Cat &other);
        ~Cat();
        void makeSound() const;
};

#endif