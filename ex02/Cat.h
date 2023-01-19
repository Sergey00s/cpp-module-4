#ifndef CAT_H
# define CAT_H


#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
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