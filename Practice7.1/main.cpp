#include <iostream>

class Animal {
  public:
    virtual void makeNoise()=0;
};

class Cat : public Animal{
  public:
    void makeNoise() {
          std::cout << "meow" << std::endl;
    }
};

class Dog : public Animal{
  public:
    void makeNoise() {
        std::cout << "bark" << std::endl;
    }
};

class Parrot : public Animal{
  public:
    void makeNoise() {
          std::cout << "whatever noise Parrot does" << std::endl;
    }
};

int main() {
  Cat cat;
  cat.makeNoise();

  Dog dog;
  dog.makeNoise();

  Parrot parrot;
  parrot.makeNoise();
  
  return 0;
}
