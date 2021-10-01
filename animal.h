#include <memory>

class Animal {
public:
    void eat(int calories);
    int getfullness();

    bool isAlive();

    Animal();
    ~Animal();

    Animal(Animal&& a);
    Animal& operator=(Animal&&);

    // copy constructor
    Animal(const Animal& a);
    Animal& operator=(const Animal&);

    static const int MAX_FULLNESS = 100;

private:
    class impl;
    std::unique_ptr<impl> pImpl;
};