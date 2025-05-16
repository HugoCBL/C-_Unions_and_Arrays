#include <iostream>
using namespace std;

union Valor {
    int i;
    double d;
    char c;
};

int main() {
    Valor v;

    // Atribuir valor inteiro e imprimir
    v.i = 42;
    cout << "Valor inteiro: " << v.i << endl;

    // Atribuir valor double e tentar imprimir o valor inteiro
    v.d = 3.14;
    cout << "Valor double: " << v.d << endl;
    cout << "Valor inteiro após atribuir double: " << v.i << endl;

    return 0;
}
