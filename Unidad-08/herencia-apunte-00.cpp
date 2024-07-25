#include <iostream>

using namespace std;

// MI INTENTO
class Padre {
public:
  int vida;
  bool estaVivo;
  Padre() {
    vida = 10;
    estaVivo = true;
  };
};

class Hijo : public Padre {
public:
  Hijo() { vida = 1; };
};

int main(int argc, char *argv[]) {
  Padre padre1;
  Hijo hijo1;

  cout << "El PADRE tiene vida: " << padre1.vida << endl;
  cout << "El HIJO tiene vida: " << hijo1.vida << endl;

  return 0;
}
