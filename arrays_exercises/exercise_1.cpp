#include <iostream>
using namespace std;

int main() {
    float temperaturas[7] = {21.5, 23.0, 19.8, 22.3, 20.0, 18.7, 24.1};

    cout << "Temperaturas da semana:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Dia " << i + 1 << ": " << temperaturas[i] << "°C\n";
    }

    return 0;
}
