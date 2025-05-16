#include <iostream>
#include <string>
using namespace std;

union Valor {
    int i;
    double d;
    char c;
};

enum Tipo {
    INTEIRO,
    DOUBLE,
    CHAR
};

struct Variavel {
    Valor valor;
    Tipo tipo;
};

void definirValor(Variavel &var, int i) {
    var.valor.i = i;
    var.tipo = INTEIRO;
}

void definirValor(Variavel &var, double d) {
    var.valor.d = d;
    var.tipo = DOUBLE;
}

void definirValor(Variavel &var, char c) {
    var.valor.c = c;
    var.tipo = CHAR;
}

void imprimirValor(const Variavel &var) {
    switch (var.tipo) {
        case INTEIRO:
            cout << "Valor inteiro: " << var.valor.i << endl;
            break;
        case DOUBLE:
            cout << "Valor double: " << var.valor.d << endl;
            break;
        case CHAR:
            cout << "Valor char: " << var.valor.c << endl;
            break;
    }
}

int main() {
    Variavel var;

    // Definir e imprimir diferentes tipos de valores
    definirValor(var, 42);
    imprimirValor(var);

    definirValor(var, 3.14);
    imprimirValor(var);

    definirValor(var, 'A');
    imprimirValor(var);

    return 0;
}
