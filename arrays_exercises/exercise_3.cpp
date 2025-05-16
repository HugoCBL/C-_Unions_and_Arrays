#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char palavra[11]; // Máximo 10 letras + 1 para o caractere nulo

    cout << "Digite uma palavra (até 10 letras): ";
    cin >> palavra;

    int tamanho = strlen(palavra);
    cout << "Palavra invertida: ";
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << palavra[i];
    }
    cout << endl;

    return 0;
}
