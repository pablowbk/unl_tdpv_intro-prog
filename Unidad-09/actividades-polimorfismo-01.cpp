#include <iostream>

using namespace std;

class Animal {
public:
  Animal(){};
  virtual void nacer();
};

void Animal::nacer() { cout << "Nace un nuevo animal." << endl; }

class Oviparo : public Animal {
public:
  void nacer();
};

void Oviparo::nacer() { cout << "Se abre el huevo." << endl; }

class Mamifero : public Animal {
public:
  void nacer();
};

void Mamifero::nacer() { cout << "Mamifero da a luz." << endl; }

int main(int argc, char *argv[]) {
  Animal *ani = new Animal();
  ani->nacer();
  cout << endl;

  Animal *ovi = new Oviparo();
  ovi->nacer();
  cout << endl;

  Animal *mami = new Mamifero();
  mami->nacer();
  cout << endl;

  return 0;
}
