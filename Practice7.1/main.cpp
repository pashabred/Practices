#include <iostream>

class Animal {
  public:
    virtual void makeNoise() = 0;
};

class Cat: Animal {
  void makeNoise() {
    std::cout << "meow";
  }
};
class Dog: Animal {
  void makeNoise() {
    std::cout << "bark";
  }
};

class Parrot: Animal {
  void makeNoise() {
    std::cout << "whatever noise Parrot does";
  }
};

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
