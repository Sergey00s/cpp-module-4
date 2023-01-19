#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const &other);
		Brain &operator=(Brain const &other);
		std::string *getIdeas();
		std::string getIdea(int i) const;
};

#endif