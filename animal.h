#include <memory>

class Animal {
public:
    void eat(int calories);
    int getfullness();

    bool isAlive();

    Animal();
    ~Animal();

    Animal(Animal&&);
    Animal& operator=(Animal&&);

    // copy constructor
    Animal(const Animal&) = delete;
    Animal& operator=(const Animal&) = delete;

    static const int MAX_FULLNESS = 100;

private:
    class impl;
    std::unique_ptr<impl> pImpl;
};