#include <iostream>

using namespace std;

class PagamentoCartao {
public:
    void processarPagamento(float valor) const {
        cout << "Processando pagamento: $" << valor << endl;
    }
};

class Pagamento {
public:
    void realizarTransferencia(float valor) const {
        cout << "Realizando transferência: $" << valor << endl;
    }
};

int main() {
    PagamentoCartao cartaoCredito;
    Pagamento carteiraDigital;

    cartaoCredito.processarPagamento(100);
    carteiraDigital.realizarTransferencia(50);

    return 0;
}
