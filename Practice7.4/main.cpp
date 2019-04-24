#include <iostream>
class Screen {
public:
  virtual void screenWork() = 0;
};

class Keyboard {
public:
  virtual void keyboardWork() = 0;
};

class Laptop : public Screen, Keyboard {
public:
    void keyboardWork() {
      std::cout << "Laptop's keyboard works" << std::endl;
    }

    void screenWork() {
      std::cout << "Laptop's screen works" << std::endl;
    }
};

class Phone: public Screen, Keyboard {
public:
  void keyboardWork() {
    std::cout << "Phone's keyboard works" << std::endl;
  }

  void screenWork() {
    std::cout << "Phone's screen works" << std::endl;
  }
};

class Desktop: public Screen, Keyboard {
public:
  void keyboardWork() {
    std::cout << "Desktop's keyboard works" << std::endl;
  }

  void screenWork() {
    std::cout << "Desktop's screen works" << std::endl;
  }
};


int main(int argc, char const *argv[]) {
  Laptop l;
  l.keyboardWork();
  l.screenWork();

  Desktop d;
  d.keyboardWork();
  d.screenWork();

  Phone p;
  p.keyboardWork();
  p.screenWork();
  return 0;
}
