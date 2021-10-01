#include "animal.h"

class Animal::impl
{
public:
    int fullness = 10;

    void eat(Animal &a, int calories)
    {
        if (a.isAlive())
        {
            fullness += calories;
            if (fullness > Animal::MAX_FULLNESS)
            {
                fullness = Animal::MAX_FULLNESS;
            }
        }
    }
};

Animal::Animal() : pImpl(std::make_unique<impl>()) {}

Animal::~Animal() = default;
Animal::Animal(Animal &&) = default;
Animal &Animal::operator=(Animal &&) = default;

bool Animal::isAlive()
{
    return true;
}

void Animal::eat(int calories)
{
    pImpl->eat(*this, calories);
}

int Animal::getfullness()
{
    return pImpl->fullness;
}