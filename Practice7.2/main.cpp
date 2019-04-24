#include <iostream>

class Figure {
  public:
    virtual void showFigureType() = 0;
    virtual void wayToFindS() = 0;
};

class Rectangle : public Figure {
  public:
    virtual void wayToFindP() = 0;
};

class Rhombus : public Rectangle {
  public:
    void wayToFindP() {
      std::cout << "P=" << "4*a" << std::endl;
    }
    void wayToFindS() {
      std::cout << "S=" << "a*h" << std::endl;
    }
    void showFigureType() {
      std::cout << "Rhombus" << std::endl;
    }
};

int main() {
  Rhombus r;
  r.wayToFindS();
  r.wayToFindP();
  r.showFigureType();
  return 0;
}
