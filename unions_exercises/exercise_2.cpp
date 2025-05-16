#include <iostream>
using namespace std;

union EnderecoIP {
    unsigned int inteiro;
    unsigned char octetos[4];
};

int main() {
    EnderecoIP ip;

    // Atribuir valores aos octetos e acessar o inteiro
    ip.octetos[0] = 192;
    ip.octetos[1] = 168;
    ip.octetos[2] = 1;
    ip.octetos[3] = 10;

    cout << "Endereço IP como inteiro: " << ip.inteiro << endl;

    // Atribuir valor inteiro e acessar os octetos
    ip.inteiro = 3232235770; // 192.168.1.10 em decimal
    cout << "Endereço IP como octetos: "
         << (int)ip.octetos[0] << "."
         << (int)ip.octetos[1] << "."
         << (int)ip.octetos[2] << "."
         << (int)ip.octetos[3] << endl;

    return 0;
}
