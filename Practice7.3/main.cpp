#include <iostream>


class Transport {
  public:
    virtual void drive()=0;
};

class Car : public Transport {
  public:
    void drive() {
      std::cout << "speed is 55" << std::endl;
    }
};

class Bike : public Transport {
  public:
    void drive() {
      std::cout << "speed is 77" << std::endl;
    }
    void beCool(){
      std::cout << "hell yeah rock n roll'";
    }
};

class Bus : public Transport {
  public:
    void drive() {
      std::cout << "speed is 30" << std::endl;
    }
};
int main() {

  Bike bike;
  bike.beCool();
  bike.drive();

  Car car;
  car.drive();

  Bus bus;
  bus.drive();
  return 0;
}
