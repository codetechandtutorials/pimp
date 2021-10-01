#include "animal.h"
#include <iostream>
int main() {
    Animal *cat = new Animal();
    std::cout << "cat fullness before eating: " << cat->getfullness() << std::endl;
    cat->eat(10);
    std::cout << "cat fullness after eating: " << cat->getfullness() << std::endl;


    Animal other_cat(std::move(*cat));

    delete cat;
    cat = nullptr;

    std::cout << "other cat fullness before eating: " << other_cat.getfullness() << std::endl;


    if (!cat){
        cat = new Animal();
        std::cout << "cat fullness before eating: " << cat->getfullness() << std::endl;
    }

}