#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
};

int main() {
    Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Digite a matrícula do aluno " << i + 1 << ": ";
        cin >> alunos[i].matricula;
    }

    cout << "\nDados dos alunos:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Matrícula: " << alunos[i].matricula << endl;
    }

    return 0;
}
