#include <iostream>

using namespace std;

class Animal {
public:
  Animal() {};
  virtual void nacer();
};

void Animal::nacer() { cout << "Nace un nuevo animal." << endl; }

class Oviparo : public Animal {
public:
  Oviparo() {};
  void nacer();
};

void Oviparo::nacer() { cout << "Se abre el huevo." << endl; }

class Mamifero : public Animal {

public:
  Mamifero() {};
  void nacer();
};

void Mamifero::nacer() { cout << "Mamifero da a luz." << endl; }

int main(int argc, char *argv[]) {
  Animal *animal = new Oviparo();
  animal->nacer();
  cout << endl;

  animal = new Mamifero();
  animal->nacer();
  cout << endl;

  return 0;
}
