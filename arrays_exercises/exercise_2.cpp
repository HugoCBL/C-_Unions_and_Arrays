#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int soma = 0;

    cout << "Digite 5 números inteiros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
        soma += numeros[i];
    }

    float media = static_cast<float>(soma) / 5;
    cout << "A média é: " << media << endl;

    return 0;
}
