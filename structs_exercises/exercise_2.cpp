#include <iostream>
#include <cmath>
using namespace std;

struct Ponto {
    int x;
    int y;
};

int main() {
    Ponto ponto1, ponto2;

    cout << "Digite as coordenadas do primeiro ponto (x y): ";
    cin >> ponto1.x >> ponto1.y;

    cout << "Digite as coordenadas do segundo ponto (x y): ";
    cin >> ponto2.x >> ponto2.y;

    double distancia = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
    cout << "A distância euclidiana entre os dois pontos é: " << distancia << endl;

    return 0;
}
