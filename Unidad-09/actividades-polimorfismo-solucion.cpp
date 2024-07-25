#include <iostream>
using namespace std;

class Animal {

public:
  Animal() {};
  virtual void nacer();
};

void Animal::nacer() { cout << "nace un nuevo animal"; }

class Oviparo : public Animal {
public:
  Oviparo() {};
  void nacer();
};

void Oviparo::nacer() { cout << "se abre el huevo"; }

class Mamifero : public Animal {
public:
  Mamifero() {};
  void nacer();
};

void Mamifero::nacer() { cout << "se gesta un nuevo mamifero"; }

int main(int argc, char *argv[]) {

  Animal *animal = new Oviparo();
  animal->nacer();
  cout << endl;
  animal = new Mamifero();
  animal->nacer();

  return 0;
}
