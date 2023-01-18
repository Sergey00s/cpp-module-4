#ifndef WCAT_H
# define WCAT_H


#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
    private:
        /* data */
    public:
        WrongCat();
        WrongCat(std::string name);
        WrongCat& operator=(WrongCat &other);
        ~WrongCat();
        void makeSound() const;
};

#endif