#include <iostream>
class Cat {
public:
  bool live,view;
  Cat() {
    this->live = rand() % 2;
    this->view = false;
  }
  bool is_alive() {
    if (this->view = true){
      this->live;
    }
    else {
      this->live = rand() % 2;
    }
    return this->live;
  }
};

class Box {
public:
  Cat open() {
    Cat cat;
    cat.view = true;
    return cat;
  }
};