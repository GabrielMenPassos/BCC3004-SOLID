#include <iostream>
#include <functional> 

using namespace std;

int operacaoBinaria(int a, int b, const function<int(int, int)>& operacao) {
    return operacao(a, b);
}

int soma(int a, int b) {
    return a + b;
}
int multi(int a, int b) {
    return a * b;
}

int main() {
    int n1 = 5;
    int n2 = 3;

    int resultadoSum = operacaoBinaria(n1, n2, soma);
    cout << "Soma: " << resultadoSum << endl;

    int resultadoMulti = operacaoBinaria(n1, n2, multi);
    cout << "Multiplicacao: " << resultadoMulti << endl;

    return 0;
}
