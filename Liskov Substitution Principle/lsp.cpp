#include <iostream>

using namespace std;

class Veiculo {
public:
    void ligar() const {
        cout << "Veiculo Ligando" << endl;
    }
};

class Carro : public Veiculo {
public:
    void ligarCarro() const {
        cout << "Carro Ligando" << std::endl;
    }
};

void usarVeiculo(const Veiculo& v) {
    v.ligar();
}

int main() {
    Veiculo veiculo1;
    Carro Carro1;

    usarVeiculo(veiculo1);
    usarVeiculo(Carro1);

    return 0;
}
